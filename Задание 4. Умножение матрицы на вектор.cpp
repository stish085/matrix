// Задание 4. Умножение матрицы на вектор.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    float matrix[4][4];
    float vec[4], vecOk[4];
    float x=0;
    int c=0;
    std::cout << "  INT MATRIX : \n";
    for (int row = 0; row < 4; row++)
    {
        std::cout << " INT ROW " << row + 1 << "\n";
        for (int col = 0; col < 4; col++)
        {

            std::cin >> matrix[row][col];
        }


    }
    std::cout << "  INT VECTOR : \n";
    for (int i = 0; i < 4; i++)
    {
        std::cin >> vec[i];
    }
    std::cout << "  MATRIX : \n";
    for (int row = 0; row < 4; row++)
    {

        for (int col = 0; col < 4; col++)
        {

            std::cout << matrix[row][col] << " ";
        }
        std::cout << std::endl;

    }
    std::cout << std::endl;
    for (int row = 0; row < 4; row++)
    {
        x = 0;
        for (int col = 0; col < 4; col++)
        {

            x += matrix[row][col] * vec[col];
        } 
            vecOk[c] = x;
            c++;
      

    }
    std::cout << "  VECTOR C : \n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << vecOk[i];
        std::cout << std::endl;
    }
}

