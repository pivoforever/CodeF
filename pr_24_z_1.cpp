#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

int digitsNumbersSum(int);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int n;
    cin >> n;
    cout << digitsNumbersSum(n);
    return 0;
}

int digitsNumbersSum(int n)
{
    if (n == 0)
        return 0;
    else
        return n % 10 + digitsNumbersSum(n / 10);
}
