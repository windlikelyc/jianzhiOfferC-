//
// Created by lyc on 2018/3/30.
//

#include "List.h"

void List::AddToTail(ListNode **pHead, int value) {
    ListNode *pNew = new ListNode();
    pNew->m_nValue = value;
    pNew->m_pNext = nullptr;

    if (*pHead == nullptr) {
        *pHead = pNew;
    } else {
        ListNode *pNode = *pHead;

        while (pNode-> m_pNext != nullptr)
            pNode = pNode->m_pNext;
        pNode->m_pNext = pNew;
    }
}

void List::RemoveNode(ListNode **pHead, int value) {

    if (pHead == nullptr || *pHead == nullptr) {
        return;
    }
    ListNode *pToBeDeleted = nullptr;
    if ((*pHead)->m_nValue == value) {
        pToBeDeleted = *pHead;
        *pHead = (*pHead)->m_pNext;
    } else {
        ListNode *pNode = *pHead;
        while (pNode->m_pNext != nullptr && pNode->m_pNext->m_nValue != value) {
            pNode = pNode->m_pNext;
        }

        if (pNode->m_pNext != nullptr && pNode->m_pNext->m_nValue == value) {
            pToBeDeleted = pNode->m_pNext;
            pNode->m_pNext = pNode->m_pNext->m_pNext;
        }
    }
    if (pToBeDeleted != nullptr) {
        delete pToBeDeleted;
        pToBeDeleted = nullptr;
    }

}

