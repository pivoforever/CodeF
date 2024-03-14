#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

int F(int);
int G(int);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int k;
    cin >> k;
    cout << (F(k) + G(k));
    return 0;
}

int F(int n)
{
    if (n == 1)
        return 1;
    else
        return G(n - 1) + n;
}

int G(int n)
{
    if (n == 1)
        return 1;
    else
        return F(n - 1) * n;
}