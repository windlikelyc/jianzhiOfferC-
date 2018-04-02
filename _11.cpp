//
// Created by Lenovo on 2018/4/2.
//

#include "_11.h"

double _11::Power(double base, int exponent) {
    g_InvalidInput = false;
    if(equal(base,0.0) && exponent < 0)
    {
        g_InvalidInput = true;
        return 0.0;
    }
    unsigned int absExponent = (unsigned int) (exponent);
    if(exponent<0)
        absExponent = (unsigned int) (-exponent);
    double result = PowerWithUnsignedExponent(base, absExponent);
    if(exponent < 0)
        result = 1.0 / result;

    return result;

}

bool _11::equal(double a, double b) {
    if((a-b) >  -0.0000001 && (a-b) < 0.0000001)
        return true;
    else
        return false;
}

double _11::PowerWithUnsignedExponent(double base, unsigned int exponent) {
    double result = 1.0;
    for (int i = 1; i <= exponent ; ++i) {
        result *= base;
    }
    return result;
}

double _11::PowerRecursive(double base, unsigned int exponet) {
    if(exponet == 0)
        return 1;
    if(exponet == 1)
        return base;
    double result = PowerRecursive(base, exponet >> 1);
    result *= result;
    if(exponet&0x1==1)
        result *= base;
    return result;

}
