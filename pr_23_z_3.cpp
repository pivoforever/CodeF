#include <iostream>
using namespace std;

int f1(int a, int b) { return a % b; }
int f2(int a, int b) { return b % a; }
int f3(int a, int b) { return a / b; }
int f4(int a, int b) { return b / a; }

int main()
{
    int (*fptr[])(int, int) = {f1, f2, f3, f4}; // массив указателей на функции
    int n, a, b;
    cout << "Введите через пробел два числа:" << endl;
    cin >> a;
    cin >> b;
    while (1) // бесконечный цикл
    {
        cout << "\n Enter the number = ";
        cin >> n;
        if (n < 4)
            cout<<fptr[n](a,b)<<endl;
        else
            return 0; // вызов функции с номером n
    }
    return 0;
}
