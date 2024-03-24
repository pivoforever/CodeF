#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

int combinator(int, string);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int n;
    cout << "Введите длинну последовательности:";
    cin >> n;
    cout << combinator(n, "*");

    return 0;
}

int combinator(int n, string s)
{
    if (s.length() - 1 == n)
    {
        cout << s << "\t";
        return 1;
    }
    else
    {
        if (s[s.length() - 1] == '1')
        {
            return combinator(n, s + '0');
        }
        else
        {
            return combinator(n, s + '0') + combinator(n, s + '1');
        }
    }
}