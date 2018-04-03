//
// Created by lyc on 2018/3/30.
//

#ifndef JIANZHIOFFERC_05_H
#define JIANZHIOFFERC_05_H


#include "ListNode.h"

class List {
public:
    ListNode** get(){ return head; }

    void AddToTail(ListNode **pHead, int value);
    void RemoveNode(ListNode **pHead, int value);


private:
    ListNode **head;

};


#endif //JIANZHIOFFERC_05_H
