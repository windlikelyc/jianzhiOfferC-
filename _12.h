
//
// Created by Lenovo on 2018/4/2.
//

#ifndef JIANZHIOFFERC_12_H
#define JIANZHIOFFERC_12_H


class _12 {
public:
    //一个大数自增1
    bool Increment(char* num);
    void PrintNumber(char *number);


    void Print1ToMaxOfNDigits(int n);
private:

    void Print1ToMaxOfNDigitsRecursivly(char* number,int length,int index);
};


#endif //JIANZHIOFFERC_12_H
