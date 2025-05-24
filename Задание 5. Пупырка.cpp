// Задание 5. Пупырка.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
    bool matr[12][12] = { { true ,true,true ,true ,true ,true,true ,true ,true,true, true ,true  },
                          { true ,true,true ,true ,true ,true,true ,true ,true,true, true ,true  },
                          { true ,true,true ,true ,true ,true,true ,true ,true,true, true ,true  },
                          { true ,true,true ,true ,true ,true,true ,true ,true,true, true ,true  },
                          { true ,true,true ,true ,true ,true,true ,true ,true,true, true ,true  },
                          { true ,true,true ,true ,true ,true,true ,true ,true,true, true ,true  },
                          { true ,true,true ,true ,true ,true,true ,true ,true,true, true ,true  },
                          { true ,true,true ,true ,true ,true,true ,true ,true,true, true ,true  },
                          { true ,true,true ,true ,true ,true,true ,true ,true,true, true ,true  },
                          { true ,true,true ,true ,true ,true,true ,true ,true,true, true ,true  },
                          { true ,true,true ,true ,true ,true,true ,true ,true,true, true ,true  },
                          { true ,true,true ,true ,true ,true,true ,true ,true,true, true ,true  } };
    bool pop(int x)
    {   
        if (x==144)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
    bool datVerification(int y, int x, int yY, int xX)
    {
        if ((y >= yY && x >= xX) && ( x<1 && x>12 ) && (xX < 2 && xX > 13) && (y < 1 && y > 13) && (yY < 2 && yY > 13))
        {

            return false;
        }
        else
        {
            return true;
        }
    }

int main()
{
    int upperRightCornerY, upperRightCornerX,lowerLeftCornerX, lowerLeftCornerY,x=0;
    do {
        std::cout << "                         x  !\n";
        std::cout << "     1   2   3   4   5   6   7   8   9   10  11  12" << std::endl;
        for (int row = 0; row < 12; row++)
        {
            if (row == 6)
            {
                std::cout << "y|";
                std::cout << row + 1;

            }
            else if (row > 8)
            {

                std::cout << " " << row + 1;
            }
            else
            {
                std::cout << "  " << row + 1;
            }
            for (int col = 0; col < 12; col++)
            {

                if (matr[row][col] == true)
                {
                    std::cout << "  o ";
                }
                else
                {
                    std::cout << "  x ";
                }
            }
            std::cout << std::endl;

        }
        std::cout << "enter the coordinates of the upper-right corner "<< std::endl;
        std::cout << "enter Y " << std::endl;
        std::cin >> upperRightCornerY;
        std::cout << "enter X " << std::endl;
        std::cin >> upperRightCornerX;
        std::cout << "enter the coordinates of the lower-left corner" << std::endl;
        std::cout << "enter Y " << std::endl;
        std::cin >> lowerLeftCornerY;
        std::cout << "enter X " << std::endl;
        std::cin >> lowerLeftCornerX;
        if (datVerification(upperRightCornerY, upperRightCornerX, lowerLeftCornerY, lowerLeftCornerX)==true)
        {
            for (int i = upperRightCornerY - 1; i < lowerLeftCornerY; i++)
            {
                for (int j = upperRightCornerX-1; j < lowerLeftCornerX; j++)
                {
                    if (matr[i][j] == true)
                    {
                        x += 1;
                        std::cout << "Pop! "<< x << std::endl;
                        matr[i][j] = false;
                    }

                }
            }
        }
        else
        {
            std::cout << "You've gone beyond the boundaries of the bubble!!!!!!!!!!!!!!!";
        }
        pop(x);
    } while (pop(x)==true);

}

