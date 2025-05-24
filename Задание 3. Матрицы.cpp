// Задание 3. Матрицы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{

        const int rows = 4;
        const int cols = 4;
        bool f=true;
        int x= -1,matrixTwo;
        int matrix[rows][cols];
      
        std::cout << "  INT MATRIX 1: \n";
        for (int row = 0; row < rows; row++)
        {
            std::cout << " INT ROW "<< row + 1 << "\n";
            for (int col = 0; col < cols; col++)
            {   
               
                std::cin>> matrix[row][col] ;
            }

      
        }
        std::cout << "INT MATRIX 2:";
        for (int row = 0; row < rows; row++)
        {
            std::cout << " INT ROW " << row + 1 << "\n";
            for (int col = 0; col < cols; col++)
            {
             
                std::cin >> matrixTwo;
                if (matrix[row][col] != matrixTwo)
                {
                    std::cout << "Matrix ne rown";
                    f = false;
                   break;
                }
            }
            if (f == false)
            {
                break;
           }
        }

        if (f == true)
        {
        std::cout << "The matrix before turning into a diagonal: "<< std::endl;
        for (int row = 0; row < rows; row++)
        {
            
            for (int col = 0; col < cols; col++)
            {

                std::cout << matrix[row][col]<<" ";
            }
            std::cout << std::endl;

        }
        std::cout << "The matrix  diagonal: " << std::endl;
            for (int row = 0; row < rows; row++)
            {
                x++;

                for (int col = 0; col < cols; col++)
                { 

                    if (col !=x)
                    {
                    matrix[row][col]=0;

                    }
                   

                   std::cout << matrix[row][col] << " ";

                        

                }
                std::cout << std::endl;
            }

        }
}

