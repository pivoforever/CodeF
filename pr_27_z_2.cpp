#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>
#include <format>

using namespace std;

template <class Data> // type – это имя параметризируемого типа
void print(Data a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int size;
    cout << "Введите размер массива:\n";
    cin >> size;
    int *a = new int[size];
    cout << "Введите целые чила для массива:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    print(a, size);
    cout << "Введите размер массива:\n";
    cin >> size;
    double *b = new double[size];
    cout << "Введите вещественные чила для массива:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> b[i];
    }
    print(b, size);
    return 0;
}
