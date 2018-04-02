//
// Created by Lenovo on 2018/4/2.
//

#ifndef JIANZHIOFFERC_11_H
#define JIANZHIOFFERC_11_H


class _11 {
public:
    double Power(double base, int exponent);

    double PowerRecursive(double base, unsigned int exponet);

private:
    bool g_InvalidInput = false;

    bool equal(double base, double d);

    double PowerWithUnsignedExponent(double base, unsigned int exponent);
};


#endif //JIANZHIOFFERC_11_H
