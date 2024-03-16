#include <iostream>
using namespace std;

int f1(int a, int b) { return a + b; }
int f2(int a, int b) { return a - b; }
int f3(int a, int b) { return a * b; }

int main()
{
    int (*fptr[])(int, int) = {f1, f2, f3}; // массив указателей на функции
    int a, b;
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
            cout << fptr[0](a, b);
        }
        else if (ch == '-')
        {
            cout << fptr[1](a, b);
        }
        else if (ch == '*')
        {
            cout << fptr[2](a, b);
        }

        else
            return 0; // вызов функции с номером n
    }
    return 0;
}
