#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>
#include <format>

using namespace std;

#define MAX_VALUE 100;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    cout << "Константа MAX_VALUE:\n";
    cout<< MAX_VALUE;
    #undef MAX_VALUE;
    cout << "Константа MAX_VALUE:\n";
    cout<< MAX_VALUE;

    return 0;
}
