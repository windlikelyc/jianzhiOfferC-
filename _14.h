//
// Created by Lenovo on 2018/4/3.
//

#ifndef JIANZHIOFFERC_14_H
#define JIANZHIOFFERC_14_H


class _14 {

public:
    void ReorderOddEven(int *pData, unsigned int length);

    void Reorder(int *pData, unsigned int length, bool (*func)(int));

private:
    bool isEven(int n){ return (n & 1) == 0; }

};


#endif //JIANZHIOFFERC_14_H
