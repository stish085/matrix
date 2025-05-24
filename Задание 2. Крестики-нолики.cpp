// Задание 2. Крестики-нолики.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
        const int rows = 3;
        const int cols = 3;
        char matrix[rows][cols] = {
            {32, 32, 32} , 
             {32, 32, 32} ,
             {32, 32, 32}
        };
 bool vinnerOne(char(a)[rows][cols])
{   
     bool vin;
     if ( a[0][0] == 88 && a[1][1] == 88 && a[2][2] == 88 ||
          a[2][0] == 88 && a[1][1] == 88 && a[0][2] == 88 || 
         a[0][0] == 88 && a[0][1] == 88 && a[0][2] == 88 ||
         a[1][0] == 88 && a[1][1] == 88 && a[1][2] == 88 ||
         a[2][0] == 88 && a[2][1] == 88 && a[2][2] == 88 || 
         a[0][0] == 88 && a[1][0] == 88 && a[2][0] == 88 ||
         a[0][1] == 88 && a[1][1] == 88 && a[1][2] == 88 ||
         a[0][2] == 88 && a[1][2] == 88 && a[2][2] == 88  )
     {
         vin = true;
         return vin;
     }
     else
     {
         vin = false;
         return vin;
     }
}
 bool vinnerTwo(char(a)[rows][cols])
 {  
     bool vin;
     if (a[0][0] == 79 && a[1][1] == 79 && a[2][2] == 79 ||
         a[2][0] == 79 && a[1][1] == 79 && a[0][2] == 79 ||
         a[0][0] == 79 && a[0][1] == 79 && a[0][2] == 79 ||
         a[1][0] == 79 && a[1][1] == 79 && a[1][2] == 79 ||
         a[2][0] == 79 && a[2][1] == 79 && a[2][2] == 79 ||
         a[0][0] == 79 && a[1][0] == 79 && a[2][0] == 79 ||
         a[0][1] == 79 && a[1][1] == 79 && a[1][2] == 79 ||
         a[0][2] == 79 && a[1][2] == 79 && a[2][2] == 79)
     {
         vin = true;
         return vin ;
     }
     else
     {
         
             vin = false;
         return vin ;
     }
 }
int main()
{
   

        int coordinetionsRow, coordinetionsCols;
        bool vin;
        char playerOne, playerTwo;
            std::cout << "Hello Player!\n";
            for (int row = 0; row < rows; row++)
            {
                std::cout << " __  __  __\n";
                for (int col = 0; col < cols; col++)
                {

                    std::cout << "| " << matrix[row][col] << "|";

                }


                std::cout << std::endl;
            }
            std::cout << "Choose a character to play with: X or O \n";
            std::cout << "Player 1:\n";
            std::cin >> playerOne;
            playerTwo = playerOne == 88 ? 79 : 88;

            std::cout << "Player 2: \n";
            std::cout << playerTwo<<" \n";
        do
        {
            std::cout << "Player 1 make your move: \n";
            std::cout << "input row: \n";
            std::cin >> coordinetionsRow;
            std::cout << "input cols: \n";
            std::cin >> coordinetionsCols;
            if ((coordinetionsRow < 4 && coordinetionsCols < 4) && (matrix[coordinetionsRow-1][coordinetionsCols-1] == 32))
            {
                matrix[coordinetionsRow - 1][coordinetionsCols - 1] = playerOne;
                for (int row = 0; row < rows; row++)
                {
                    std::cout << " __  __  __\n";
                    for (int col = 0; col < cols; col++)
                    {

                        std::cout << "| " << matrix[row][col] << "|";

                    }


                    std::cout << std::endl;
                }
                vin = vinnerOne(matrix);
                if (vin == true)
                {
                    break;
                }

                std::cout << "Player 2 make your move: \n";
                std::cout << "input row: \n";
                std::cin >> coordinetionsRow;

                std::cout << "input cols: \n";
                std::cin >> coordinetionsCols;
                if ((coordinetionsRow < 4 && coordinetionsCols < 4) &&( matrix[coordinetionsRow-1][coordinetionsCols-1] == 32) )
                {
                    matrix[coordinetionsRow - 1][coordinetionsCols - 1] = playerTwo;
                    for (int row = 0; row < rows; row++)
                    {
                        std::cout << " __  __  __\n";
                        for (int col = 0; col < cols; col++)
                        {

                            std::cout << "| " << matrix[row][col] << "|";

                        }


                        std::cout << std::endl;
                    }
                    vin = vinnerOne(matrix);
                    if (vin == true)
                    {
                        break;
                    }
                }
                else
                {
                    std::cout << " you have left the playing field or the cell is already filled.\n";
                    std::cout << " Your turn goes to another player!!!\n";
                    continue;
                }
            }
            else
            {
                std::cout << " you have left the playing field or the cell is already filled.\n";
                std::cout << " Your turn goes to another player!!!\n";
                continue;
            }

        } while (true);
        std::cout <<" YOU ARE WINNER!!!!!!!!!!!!!!!!!!!!!!!\n";
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
