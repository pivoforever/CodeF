#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>
#include <format>

using namespace std;

#define PI 3.1415926;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    double r;
    cout << "Введите радиус круга:\n";
    cin >> r;
    cout << "Площадь круга:\n"
         << r * r * PI;

    return 0;
}
