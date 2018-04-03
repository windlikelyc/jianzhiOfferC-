//
// Created by Lenovo on 2018/4/3.
//

#include "_14.h"


void _14::ReorderOddEven(int *pData, unsigned int length) {

    Reorder(pData, length, isEven);

}

void _14::Reorder(int *pData, unsigned int length, bool (*func)(int)) {
    if (pData == nullptr || length == 0) {
        return;
    }
    int *pBegin = pData;
    int *pEnd = pData + length - 1;

    while (pBegin < pEnd) {

        while (*pBegin && !func(*pBegin)) {
            pBegin++;
        }

        while (*pEnd % 2 && !func(*pEnd)) {
            pEnd--;
        }

        if (pBegin < pEnd) {
            int tmp = *pBegin;
            *pBegin = *pEnd;
            *pEnd = tmp;
        }

    }

}
