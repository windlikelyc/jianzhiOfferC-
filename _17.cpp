//
// Created by Lenovo on 2018/4/3.
//

#include "_17.h"

ListNode *_17::Merge(ListNode *pHead1, ListNode *pHead2) {
    if (pHead1 == nullptr)
        return pHead2;
    if (pHead2 == nullptr)
        return pHead1;

    ListNode *pMergeHead = nullptr;

    if (pHead1->m_nValue < pHead2->m_nValue) {
        pMergeHead = pHead1;
        pMergeHead->m_pNext = Merge(pHead1->m_pNext, pHead2);
    } else {
        pMergeHead = pHead2;
        pMergeHead->m_pNext = Merge(pHead1, pHead2->m_pNext);
    }

    return pMergeHead;

}
