#include <string>

using namespace std;

#ifndef USER_H
#define USER_H
struct user
{
    string name;
    string surname;
    int age;
};

void printUser(user*);
void addUser(user allUser [], int &, string, string, int);
user* findUser(user allUser [], int , string);
void deleteUser(user allUser [], int &, string);

#endif