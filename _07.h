//
// Created by Lenovo on 2018/4/1.
//

#ifndef JIANZHIOFFERC_07_H
#define JIANZHIOFFERC_07_H

#include <stack>

template <typename T> class _07
{
public:
    _07(void);

    ~_07(void);

    void appendTail(const T &element);
    T deleteHead();

private:
    std::stack<T> stack1;
    std::stack<T> stack2;

};

template<typename T>
void _07<T>::appendTail(const T &element) {
    stack1.push(element);
}

template<typename T>
T _07<T>::deleteHead() {
    if (stack2.size() <= 0) {
        while (stack1.size() > 0) {
            T &data = stack1.pop();
            stack1.pop();
            stack2.push(data);
        }
    }
    if(stack2.size() == 0)
        throw new std::exception();
    T head = stack2.top();
    stack2.pop();

    return head;

}


#endif //JIANZHIOFFERC_07_H
