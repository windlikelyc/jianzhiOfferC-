//
// Created by lyc on 2018/3/30.
//

#include <c++/cstdlib>
#include "_02.h"

bool _02::Find(int *matrix, int rows, int columns, int number) {
    bool found = false;
    if (matrix != NULL && rows > 0 && columns > 0)
    {
        int row = 0;
        int column = columns - 1;
        while (row < rows && column >= 0)
        {
            if(matrix[row * columns + column] == number)
            {
                found = true;
                break;
            } else if(matrix[row * columns + column] > number)
                -- column;
            else
                ++row;
        }
    }
    return found;
}
