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
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    int a,b;
    char ch;
    cout << "??????? ??? ????? ????? ??????:" << endl;
    cin >> a;
    cin >> b;
    while (1)
    {
        cout << "\n ???????? +, - ??? ??? *: ";
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
            return 0;
    }
    cin.get();
    cin.get();
    return 0;
}
