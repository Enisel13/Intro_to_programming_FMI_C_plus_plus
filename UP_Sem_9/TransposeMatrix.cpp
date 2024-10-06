//
// Created by Enisel Kunch on 5.10.24.
//
#include <iostream>

void transposeMatrix(int matrix[][3], size_t rows, size_t cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << matrix[j][i] << " ";


        }

        std::cout << std::endl;;
    }
}


int main()
{
    size_t rows = 3;
    size_t  cols = 3;
    int matrix[3][3] = {1,2,3,
                        4,5,6,
                        7,8,9};

    transposeMatrix(matrix, rows,cols);

}