//
// Created by lyc on 2018/3/30.
//

#ifndef JIANZHIOFFERC_05_H
#define JIANZHIOFFERC_05_H
//从尾到头打印链表
struct ListNode
{
    int m_nValue;
    ListNode *m_pNext;
};

class _05 {
public:
    void PrintListReversingly_Iteratively(ListNode *pHead);

    void PrintListReversingly_Recursively(ListNode *pHead);


};


#endif //JIANZHIOFFERC_05_H
