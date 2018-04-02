//
// Created by lyc on 2018/3/30.
//

#ifndef JIANZHIOFFERC_05_H
#define JIANZHIOFFERC_05_H

struct ListNode{
    int m_nValue;
    ListNode *m_pNext;
};
class List {
public:
    ListNode** get(){ return head; }

    void AddToTail(ListNode **pHead, int value);
    void RemoveNode(ListNode **pHead, int value);


private:
    ListNode **head;

};


#endif //JIANZHIOFFERC_05_H
