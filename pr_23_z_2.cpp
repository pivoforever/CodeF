#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

int *mainFunc(int (*doFunc)(int), int a[], int);
int Func2(int);
int Func3(int);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int n, m, a[] = {4, 8, 2, 5, 7, 2, 5, 7};
    int mSize = size(a);
    int *b;
    b = mainFunc(Func2, a, mSize);
    for (int i = 0; i < mSize; i++)
    {
        cout << b[i] << "\t";
    }
    cout<<endl;
    b = mainFunc(Func3, a, mSize);
    for (int i = 0; i < mSize; i++)
    {
        cout << b[i] << "\t";
    }

    return 0;
}

int *mainFunc(int (*doFunc)(int), int a[], int mSize)
{
    int *b = new int[mSize];
    for (int i = 0; i < mSize; i++)
    {
        b[i] = doFunc(a[i]);
    }
    return b;
}

int Func2(int n)
{
    return n * n;
}

int Func3(int n)
{
    return n * n * n;
}