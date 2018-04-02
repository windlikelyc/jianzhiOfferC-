//
// Created by Lenovo on 2018/4/1.
//

#include <exception>
#include "Sort.h"

int Sort::Partition(int *data, int length, int start, int end) {
    if (data == nullptr || length <= 0 || start < 0 || end >= length) {
        throw new std::exception();
    }
    int index = RandomInRange(start, end);
    Swap(data[index], data[end]);

    int small = start - 1;
    for(index = start;index < end;++index)
    {
        if(data[index] < data[end])
        {
            ++small;
            if(small != index)
                Swap(data[index], data[small]);
        }
    }
    ++small;
    Swap(data[small], data[end]);
    return small;

}

int Sort::RandomInRange(int start, int anEnd) {
    return anEnd;
}

void Sort::Swap(int &a, int &b) {
    int tmm = a;
    a = b;
    b = tmm;
}

void Sort::QuickSort(int *data, int length, int start, int end) {
    if(start == end)
        return;
    int index = Partition(data, length, start, end);
    if (index > start) {
        QuickSort(data, length, start, index - 1);
    }
    if (index < end) {
        QuickSort(data, length, index + 1, end);
    }


}

void Sort::SortAges(int *ages, int length) {
    if(ages == nullptr || length <= 0) {
        return;
    }
    const int oldestAge = 99;
    int timesOfAge[oldestAge + 1];

    for (int i = 0; i <= oldestAge; ++i) {
        timesOfAge[i] = 0;
    }

    for (int i = 0; i < length; ++i) {
        int age = ages[i];
        if(age<0||age> oldestAge)
            throw new std::exception();
        ++timesOfAge[age];
    }

    int index = 0;
    for (int i = 0; i <= oldestAge; ++i) {
        for (int j = 0; j < timesOfAge[i]; ++j) {
            ages[index] = i;
            ++index;
        }
    }



}
