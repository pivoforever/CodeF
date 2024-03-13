#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

bool simple(int, int d = 2);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int n;
    cin >> n;
    if (simple(n))
        cout << "Число простое";
    else
        cout << "Число составное";
    return 0;
}

bool simple(int n, int d)
{
    if (n % d == 0)
        return false;
    else if (d > n / 2)
    {
        return true;
    }
    else
        return simple(n, d + 1);
}