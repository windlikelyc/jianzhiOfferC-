//
// Created by lyc on 2018/3/30.
//

#include <stack>
#include <cstdio>
#include "_05.h"

void _05::PrintListReversingly_Iteratively(ListNode *pHead) {
    std::stack<ListNode *> nodes;

    ListNode *pNode = pHead;
    while (pNode != nullptr) {
        nodes.push(pNode);
        pNode = pNode->m_pNext;
    }
    while (!nodes.empty()) {
        pNode = nodes.top();
        printf("%d\t", pNode->m_nValue);
    }

}

void _05::PrintListReversingly_Recursively(ListNode *pHead) {
    if (pHead != nullptr) {
        if (pHead->m_pNext != nullptr) {
            PrintListReversingly_Recursively(pHead->m_pNext);
        }
    }
    printf("%d/t", pHead->m_nValue);
}
