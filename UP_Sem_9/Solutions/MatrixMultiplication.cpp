//
// Created by Enisel Kunch on 5.10.24.
//

#include <iostream>

void printMatrix(const int matrix[][3], size_t rows, size_t cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << matrix[i][j];
        }

    }
}

void multiplyMatrices(const int matrix1[][2], const int matrix2[][3], int result[][3], size_t rows1, size_t cols1, size_t rows2, size_t cols2)
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            int sum = 0;
            //Вътрешният цикъл (по k) изчислява произведението
            // на елементите от текущия ред на matrix1 и текущата колона на matrix2,
            // което дава елемент от резултантната матрица.
            for (int k = 0; k < rows2; k++)
            {
                sum+= matrix1[i][k] * matrix2[k][j];
                
            }
            result[i][j] = sum;
            
        }

    }
    printMatrix(result, 5, 3);

}