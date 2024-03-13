#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

void allComb(string);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    string s;
    cin>>s;
    allComb(s);
    return 0;
}

void allComb(string s)
{
    
}