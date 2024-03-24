#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

int triBonachy(int);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int n;
    cout << "Введите количество чисел:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << triBonachy(i) << "\t";
    }

    return 0;
}

int triBonachy(int n)
{
    if (n == 1)
        return 0;
    else if ((n == 2) || (n == 3))
    {
        return 1;
    }

    else
    {
        return triBonachy(n - 3) + triBonachy(n - 2) + triBonachy(n - 1);
    }
}