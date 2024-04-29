#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>
#include <format>

using namespace std;

class Array
{
    int size;
    string data;

public:
    void setSize(int n)
    {
        if (n>0) size=n;
        else size=1;
    }
    void setData(string s)
    {
        data = s;
    }

    double operator[](int index)
    {
        int cnt=0, i=0;
        while (cnt<index)
        {
            if(data[i]==' ') cnt++;
        }
        return a * x + b;
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    Function test;
    double x;
    test.setA(10.5);
    test.setB(2.3);
    cout << "Введите x:" << endl;
    cin >> x;
    cout << "Результат перегрузки (): " << (test(x));
    return 0;
}