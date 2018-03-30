//
// Created by lyc on 2018/3/30.
//

#include "_04.h"

void _04::ReplaceBlank(char *string, int length) {
    if (string == nullptr && length <= 0) return;

    int originalLength = 0;
    int numberOfblank = 0;
    int i = 0;
    while (string[i] != '\0') {
        ++originalLength;
        if(string[i] == ' ') ++numberOfblank;
        ++i;
    }

    int newLength = originalLength + numberOfblank * 2;
    if (newLength > length) {
        return;
    }
    int indexOfOrigin = originalLength;
    int indexOfNew = newLength;
    while (indexOfOrigin >= 0 && indexOfNew > indexOfOrigin) {
        if (string[indexOfOrigin] == ' ') {
            string[indexOfNew--] = '0';
            string[indexOfNew--] = '2';
            string[indexOfNew--] = '%';
        } else {
            string[indexOfNew--] = string[indexOfOrigin];
        }
        --indexOfOrigin;

    }

}
