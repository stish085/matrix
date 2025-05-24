// Задание 1. Банкетный стол.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
#include <iostream>

  
        

            const int rows = 2;
            const int cols = 6;
            std::cout << "the condition of the tables before the incidents:\n";
            int tableware[rows][cols] = {
                {4, 3, 3, 3, 3, 3} ,  
                {4, 3, 3, 3, 3, 3}  
            };
            std::cout << "tableware:\n";
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < cols; col++)
                {
                    std::cout << tableware[row][col] << "\t";
                }

               
                std::cout << std::endl;
            }

            int dishes[rows][cols] = {
               { 3, 2, 2, 2, 2, 2 } ,
               { 3, 2, 2, 2, 2, 2 }
            };
            std::cout << "dishes:\n";
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < cols; col++)
                {
                    std::cout << dishes[row][col] << "\t";
                }

               
                std::cout << std::endl;
            }
            int chairs[rows][cols] = {
               {1, 1, 1, 1, 1, 1} ,  
               {1, 1, 1, 1, 1, 1}

            };
            std::cout << "chairs:\n";
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < cols; col++)
                {
                    std::cout << chairs[row][col] << "\t";
                }

                
                std::cout << std::endl;
            }
            chairs[0][4] += 1;
            tableware[1][2] -= 1;
            tableware[0][0] -= 1;
            dishes[0][0] -= 1;
std::cout << "the condition of the tables after the incidents:\n";
            std::cout << "tableware:\n";
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < cols; col++)
                {
                    std::cout << tableware[row][col] << "\t";
                }

              
                std::cout << std::endl;
            }
            std::cout << "dishes:\n";
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < cols; col++)
                {
                    std::cout << dishes[row][col] << "\t";
                }

               
                std::cout << std::endl;
            }
            std::cout << "chairs:\n";
            for (int row = 0; row < rows; row++)
            {
                for (int col = 0; col < cols; col++)
                {
                    std::cout << chairs[row][col] << "\t";
                }

                
                std::cout << std::endl;
            }

}

