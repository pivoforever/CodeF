#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

int F(int);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int n;
    cin >> n;
    cout << F(n);
    return 0;
}

int F(int n)
{
    if (n < 4)
        return n;
    else
    {
        if (n % 3 == 0)
            return F(n - 3) * 3;
        else if (n % 3 == 1)
            return F(n - 1) + n;
        else
            return F(n - 2) + n;
    }
}