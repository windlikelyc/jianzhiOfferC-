#include <iostream>
#include "_02.h"
#include "_04.h"

int main() {
    _04 solu;
    char a[20] = {' ','w','c',' ',' ','w','s','\0'};
    std::cout << a;
    solu.ReplaceBlank(a, 20);
    std::cout << a;


}