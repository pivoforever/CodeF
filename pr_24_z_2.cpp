#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

int nodFinder(int, int);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int n, m;
    cin >> n;
    cin >> m;
    cout << nodFinder(n, m);
    return 0;
}

int nodFinder(int n, int m)
{
    if (n % m == 0)
        return m;
    else if (n > m)
        return nodFinder(m, n % m);
    else
        return nodFinder(n, m % n);
}