#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

int arifm(int, int);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int n;
    cout << "Введите конечное число:";
    cin >> n;
    cout<<arifm(2,n);

    return 0;
}

int arifm(int n, int m)
{
    if (n>m)
    {
        return 0;
    }
    else if (n==m)
    {
        return 1;
    }
    else
    {
        return arifm(n+1,m)+arifm(n+3,m);
    }
}