#include <iostream>
#include <conio.h> 
#include <Windows.h>
#include <iomanip>

//#define WHILE_1
//#define WHILE_2
//#define DO_WHILE
//#define FOR_DEBUG
//#define MULTITAB
#define PIFA_TAB


int main()
{
    setlocale(LC_ALL, "");
#ifdef WHILE_1
    int i = 0; //������� �����.
    int n;     // ����������� ��������.

    std::cout << "Enter iteration times: "; std::cin >> n;

    while (i < n)
    {
        std::cout << ++i << " Hello";
        //i++;
    }
#endif // WHILE_1

#ifdef WHILE_2

    int n;     // ����������� ��������.

    std::cout << "Enter iteration times: "; std::cin >> n;

    while (n--)
    {
        std::cout << n << "\t";
    }

#endif // WHILE_2

#ifdef DO_WHILE
    char key;  // ����������� ������ ��� ������� �������
    do
    {
        key = _getch(); // ������� _getch() ������� ������� ������� � ���������� ASCII-��� ������� �������.
        std::cout << (int)key << "\t" << key << std::endl;
        //(int)key - ����� �������������� "key" � ��� ������ 'char' ��� ����, ���� ������� ��� ������� �������.
    } while ((int)key != 27);
#endif // DO_WHILE

#ifdef FOR_DEBUG
    int n; // ���-�� ��������
    std::cout << "Enter qty of iterations" << std::endl; std::cin >> n;
    for (
        int i = 0;
        i < n;
        i++
        )
    {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
#endif // FOR_DEBUG


    /*
      ����� ����������� ����� C++ ����� ������� � ����� ������ �����������.
     � if ����� ���������� �����, � ����� ����� ��������� ��� �� ������ �����.

     ����� ������� � ��������� ������, ��� ������ ����� ����� ��������� for.

     �������� for ������ �������� ���:
     */


     /*
 #ifdef MULTITAB
     for (int i = 1; i <= 100; i++)
     {
         std::cout << "\n Multiplication on " << i << ": \n";
         for (int j = 1; j <= 100; j++)
         {
             std::cout << "\t\t\t";
             if (i < 10) std::cout << " ";
             std::cout << i << " * ";
             if (j < 10) std::cout << " ";
             std::cout << " ";
             if (i * j < 100) std::cout << " ";
             if (i * j < 10) std::cout << " ";
             std::cout << i * j << std::endl;
             Sleep(10);
         }
     }
     std::cout << std::endl;
 #endif // MULTITAB

     /*for (int h = 0; h < 24; h++)
     {
         for (int m = 0; m < 59; m++)
         {
             for (int s = 0; s < 59; s++)
             {
                 std::cout << h << " : " << m << " : " << s;
                 Sleep(1000);
                 system("cls");
             }
         }
        */
#ifdef PIFA_TAB

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            std::cout.width(5);
            std::cout << i * j;
        }
        std::cout << std::endl;
    }

#endif // PIFA_TAB

}



