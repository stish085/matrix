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

// так же можно было не создават вторую матрицу"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В #include <iostream>

//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
