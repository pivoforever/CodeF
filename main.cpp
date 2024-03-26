#include <iostream>
#include <cstdlib>
#include <locale>
#include"user.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    int size=0;
    user allUser[100];
    addUser(allUser,size,"Иван","Иванов",25);
    addUser(allUser,size,"Петр","Петров",35);
    addUser(allUser,size,"Евгений","Сидоров",55);
    addUser(allUser,size,"Виталий","Малыхин",15);
    for (size_t i = 0; i < size; i++)
    {
        printUser(allUser+i);
    }
    
}