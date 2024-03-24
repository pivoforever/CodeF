#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

int mainFunc(int (*doFunc)(int, int),int,int);
int addFunc(int,int);
int multFunc(int,int);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int n,m;
    cout<<"Введите два числа через пробел:"<<endl;
    cin>>n;
    cin>>m;
    cout<<mainFunc(addFunc,n,m)<<endl;
    cout<<mainFunc(multFunc,n,m)<<endl;
    return 0;
}

int mainFunc(int (*doFunc)(int, int),int n,int m)
{
    return doFunc(n,m);
}

int addFunc(int n,int m)
{
    return n+m;
}

int multFunc(int n,int m)
{
    return n*m;
}
