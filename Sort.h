//
// Created by Lenovo on 2018/4/1.
//

#ifndef JIANZHIOFFERC_SORT_H
#define JIANZHIOFFERC_SORT_H


class Sort {
public:
    void QuickSort(int data[], int length, int start, int end);

    void SortAges(int ages[], int length);
private:

    int Partition(int data[], int length, int start, int end);

    int RandomInRange(int start, int anEnd);

    void Swap(int &a, int &b);
};


#endif //JIANZHIOFFERC_SORT_H
