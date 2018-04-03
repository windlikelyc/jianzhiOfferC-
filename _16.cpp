//
// Created by Lenovo on 2018/4/3.
//

#include "_16.h"

ListNode *_16::pReverseList(ListNode *pHead) {
    if (pHead == nullptr || pHead->m_pNext == nullptr) {
        return pHead;
    }
    ListNode *pReverseHead = nullptr;

    ListNode *pNode = pHead;
    ListNode *pPrev = nullptr;

    while (pNode != nullptr) {
        ListNode *pNext = pNode->m_pNext;
        if(pNext == nullptr)
            pReverseHead = pNode;

        pNode->m_pNext = pPrev;
        pNode = pNext;
    }

    return pReverseHead;

}
