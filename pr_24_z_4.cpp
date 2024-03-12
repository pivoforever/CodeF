#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

bool simple(int, ...);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int n;
    cin >> n;
    cout << simple(n);
    return 0;
}

bool simple(int n, int d = 2)
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