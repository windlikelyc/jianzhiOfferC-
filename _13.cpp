//
// Created by Lenovo on 2018/4/3.
//

#include "_13.h"

void _13::DeleteNode(ListNode **pListHead, ListNode *pToBeDeleted) {
    if(!pListHead || !pToBeDeleted)
        return;
    if (pToBeDeleted->m_pNext != nullptr) {
        ListNode *pNext = pToBeDeleted->m_pNext;
        pToBeDeleted->m_nValue = pNext->m_nValue;
        pToBeDeleted->m_pNext = pNext->m_pNext;

        delete pNext;
        pNext = nullptr;
    } else if (*pListHead == pToBeDeleted) {
        delete pToBeDeleted;
        pToBeDeleted = nullptr;
        *pListHead = nullptr;
    } else{
        ListNode *pNode = *pListHead;
        while (pNode->m_pNext != pToBeDeleted) {
            pNode = pNode->m_pNext;
        }
        pNode->m_pNext = nullptr;
        delete pToBeDeleted;
        pToBeDeleted = nullptr;
    }

}
