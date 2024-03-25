#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>
#include <format>

using namespace std;

double myMax(double a, double b)
{
    return (a >= b ? a : b);
}

int myMax(int a, int b)
{
    return (a >= b ? a : b);
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    string s1, s2;
    int a, b;
    double x, y;
    cout << "Введите два числа через пробел:\n";
    cin >> s1;
    cin >> s2;
    if ((s1.find(".") != string::npos) || (s2.find(".") != string::npos))
    {
        x = stod(s1);
        y = stod(s2);
        double res = myMax(x, y);
        cout << res;
    }
    else
    {
        a = stoi(s1);
        b = stoi(s2);
        int res = myMax(a, b);
        cout << res;
    }
    cin.get();
    cin.get();
    return 0;
}
