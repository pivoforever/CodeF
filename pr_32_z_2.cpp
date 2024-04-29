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

    int operator[](int index)
    {
        int cnt=0, i=0;
        string ans="";
        while (cnt<index)
        {
            if(data[i]==' ') cnt++;
            i++;
        }
        while (data[i]!=' ')
        {
            ans+=data[i];
            i++;
        }
        return stoi(ans);
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    Array test;
    test.setSize(5);
    test.setData("1 45 3 15 5");
    cout << "Значение test[0]: " << test[0]<<endl;
    cout << "Значение test[3]: " << test[3]<<endl;
    cout << "Значение test[4]: " << test[4]<<endl;
    return 0;
}