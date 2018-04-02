//
// Created by Lenovo on 2018/4/1.
//

#include "_10.h"

int _10::NumberOf1(int n) {
    int c = 0;
    while (n) {
        if(n&1) c++;
        n = n >> 1;
    }
    return c;
}

int _10::minerNumberOf1(int n) {
    int count = 0;
    unsigned int flag = 1;
    while (flag) {
        if(n&flag)
            count++;
        flag = flag << 1;
    }
    return count;

}

int _10::superiseNumberOf1(int n) {
    int count = 0;
    while (n) {
        ++count;
        n = (n - 1) & n;
    }
    return count;

}
