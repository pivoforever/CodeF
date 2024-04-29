#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>
#include <format>

using namespace std;

class Function
{
    double a, b;

public:
    void setA(double newA)
    {
        a = newA;
    }
    void setB(double newB)
    {
        b = newB;
    }

    double operator()(double x)
    {
        return a * x + b;
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    Function test;
    double x;
    test.setA(10.5);
    test.setB(2.3);
    cout << "Введите x:" << endl;
    cin >> x;
    cout << "Результат перегрузки (): " << test(x);
    return 0;
}