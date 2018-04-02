//
// Created by Lenovo on 2018/4/2.
//

#include <cstring>
#include <cstdio>
#include "_12.h"

void _12::Print1ToMaxOfNDigits(int n) {
    if(n<=0)
        return;
    char *num = new char[n + 1];
    num[n] = '\0';
    for (int i = 0; i < 10; i++) {
        num[0] = i + '0';
        Print1ToMaxOfNDigitsRecursivly(num, n, 0);
    }
    delete[] num;

}

void _12::Print1ToMaxOfNDigitsRecursivly(char *number, int length, int index) {

    if(index == length-1){
        PrintNumber(number);
        return;
    }

    for(int i = 0;i < 10;++i)
    {
        number[index + 1] = i + '0';
        Print1ToMaxOfNDigitsRecursivly(number, length, index + 1);
    }

}

void _12::PrintNumber(char *number) {
    bool isBeginn0 = true;
    int nLength = strlen(number);

    for (int i = 0; i < nLength; i++) {
        if(isBeginn0 && number[i] != '0')
            isBeginn0 = false;
        if (!isBeginn0) {
            printf("%c", number[i]);
        }

    }
    printf("\t");


}

bool _12::Increment(char *num) {
    bool isOverflow = false;
    int nTakeOver = 0;
    int nLength = strlen(num);
    for (int i = nLength - 1; i >= 0; i--) {
        int nSum = num[i] - '0' + nTakeOver;
        if(i == nLength-1)
            nSum++;
        if (nSum >= 10) {
            if(i==0)
                isOverflow = true;
            else
            {
                nSum -= 10;
                nTakeOver = 1;
                num[i] = '0' + nSum;
            }
        } else{
            num[i] = '0' + nSum;
            break;
        }
    }
    return isOverflow;
}
