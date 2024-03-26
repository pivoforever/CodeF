#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

#define DEBUG4BITE ;

void summAndMultFunc(int x = 5, int y = 10, ...);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int x, y;
    cout << "Введите через пробел два числа, которые нужно просуммировать:" << endl;
    summAndMultFunc(40, 50, 5, 7, 2, 2, 5, 0);
    return 0;
}

void summAndMultFunc(int x, int y, ...)
{
    cout << "Сумма первых двух чисел: " << x + y << endl;
    int *ptr = &y;
    int mult = 1;
#ifdef DEBUG4BITE
    for (int i = 0; i < 18; i++)
    {
        cout << *ptr << "\t";
        ptr += 1;
    }
#else
    ptr += 2;
    cout << endl;
    while (*(ptr) != 0)
    {
        mult *= *(ptr);
        ptr += 2;
    }
    cout << endl
         << "Произведение всех остальных чисел: " << mult;
#endif
}
