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
    addUser(allUser,size,"Ivan","Ivanov",25);
    addUser(allUser,size,"Petr","Petrov",35);
    addUser(allUser,size,"Evgeniy","Sidorov",55);
    addUser(allUser,size,"Vitaliy","Malikchin",15);
    for (size_t i = 0; i < size; i++)
    {
        printUser(allUser+i);
    }
    string nameU;
    cout<<"Input name of user:\n";
    cin>>nameU;
    user* ptr=findUser(allUser,size, nameU);
    if(ptr!=nullptr)
    {
        cout<<(*ptr).name<<"\t"<<(*ptr).surname<<"\t"<<(*ptr).age<<"\t";
    }
    else
    {
        cout<<"The name isn't in list.";
    }
    cout<<endl;
    cout<<"Input name of user for delete:\n";
    cin>>nameU;
    deleteUser(allUser,size,nameU);
    for (size_t i = 0; i < size; i++)
    {
        printUser(allUser+i);
    }

}