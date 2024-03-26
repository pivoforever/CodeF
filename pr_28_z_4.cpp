#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>
#include <format>
#include"functions.h"

using namespace std;

int main()
{
    int a,b;
    char ch;
    cout << "Введите через пробел два числа:" << endl;
    cin >> a;
    cin >> b;
    while (1) // бесконечный цикл
    {
        cout << "\n Введите +, - или *: ";
        cin >> ch;
        if (ch == '+')
        {
            cout << f1_vit(a, b);
        }
        else if (ch == '-')
        {
            cout << f2_vit(a, b);
        }
        else if (ch == '*')
        {
            cout << f3_vit(a, b);
        }

        else
            return 0; // вызов функции с номером n
    }
    cin.get();
    cin.get();
    return 0;
}
