#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

void summAndMultFunc(int, int, ...);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int x, y;
    cout << "Введите через пробел два числа, которые нужно просуммировать:" << endl;
    summAndMultFunc(15, 20, 5, 7, 2, 0);
    return 0;
}

void summAndMultFunc(int x = 5, int y = 10, ...)
{
    cout << "Сумма первых двух чисел: " << x + y << endl;
    int *ptr = &y;
    int mult = 1;
    ptr+=2;
    /*for (int i = 0; i < 8; i+=2)
    {
        cout<<*ptr<<"\t";
        ptr+=2;
    }*/
    cout <<endl;
   while (*(ptr) != 0)
    {
        mult *= *(ptr);
        ptr+=2;
    }
    cout <<endl<< "Произведение всех остальных чисел: " << mult;
}