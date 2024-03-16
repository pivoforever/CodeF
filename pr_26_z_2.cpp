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
    cout<<"Введите количество чисел:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout<<triBonachy(i)<<"\t";
    }
    
    return 0;
}

int triBonachy(int n)
{
    int x1=0,x2=1,x3=1, tmp;
    if (n==1)
    {
        return 0;
    }
    else if ((n==2)||(n==3))
    {
        return 1;
    }
    else
    {
        for (int i = 4; i <= n; i++)
        {
            tmp=x1+x2+x3;
            x1=x2;
            x2=x3;
            x3=tmp;
        }
        return tmp;
        
    }
    
    
    
}