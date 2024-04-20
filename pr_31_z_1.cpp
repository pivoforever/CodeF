#include <iostream>
#include <iomanip>
using namespace std;
class Fraction
{
    int Chisl; // Числитель дроби.
    int Znam;  // Знаменатель дроби.
public:
    Fraction(int a, int b)
    {
        Chisl = a;
        Znam = b;
    }
    void Print()
    {
        cout << Chisl << "/" << Znam << endl;
    }
    void SetChisl(int a)
    {
        Chisl = a;
    }
    void SetZnam(int b)
    {
        Znam = b;
    }
    int GetChisl()
    {
        return Chisl;
    }
    int GetZnam()
    {
        return Znam;
    }
    Fraction operator=(Fraction B)
    {
        this->Chisl = B.Chisl;
        this->Znam = B.Znam;
        return *this;
    }
    Fraction operator++()
    {
        Chisl += Znam;
        return *this;
    }
    Fraction operator++(int)
    {
        Fraction Temp = *this;
        Chisl += Znam;
        return Temp;
    }
    Fraction operator--()
    {
        Chisl -= Znam;
        return *this;
    }
    Fraction operator--(int)
    {
        Fraction Temp = *this;
        Chisl -= Znam;
        return Temp;
    }
};
int main()
{
    Fraction A(4, 5), B(4, 10);
    A.Print();
    B.Print();
    B = A;
    (--A).Print();
    (B--).Print();
    B.Print();
}