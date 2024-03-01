#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <vector>
#include <string>

using namespace std;

struct product
{
    string name;
    int quantity;
};

void acceptGoods(vector<product>&);
void shipGoods(vector<product>&);
void info(vector<product>&);
int isGoodOnStock(vector<product>&, string);

int main(int argc, char const* argv[])
{
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    vector<product> stock = { {"Консервированный горошек", 10}, {"Консервированная кукуруза", 20} };
    int n;
    do
    {
        cout << "Веберите, что хотите сделать:" << endl;
        cout << "1 - принять товар на склад:" << endl;
        cout << "2 - отгрузить товар со склада:" << endl;
        cout << "3 - вевести иформацию о товаре на складе:" << endl;
        cin >> n;
        cin.get();

        switch (n)
        {
        case 1:
            acceptGoods(stock);
            break;
        case 2:
            shipGoods(stock);
            break;
        case 3:
            info(stock);
            break;
        }
    } while ((n == 1) || (n == 2) || (n == 3));
    return 0;
}

int isGoodOnStock(vector<product>& stock, string name)
{
    int cnt = 0;
    for (product elem : stock)
    {
        if (elem.name == name)
            return cnt;
        cnt++;
    }
    return -1;
}

void acceptGoods(vector<product>& stock)
{
    cout << "Введите название товара:" << endl;
    string name;
    getline(cin,name);
    cout << "Введите количество товара:" << endl;
    int addQuantity;
    cin >> addQuantity;
    cin.get();
    int index = isGoodOnStock(stock, name);
    if (index > -1)
    {
        stock[index].quantity += addQuantity;
    }
    else
    {
        stock.push_back({ name, addQuantity });
    }
}

void shipGoods(vector<product>& stock)
{
    cout << "Введите название товара:" << endl;
    string name;
    getline(cin, name);
    cout << "Введите количество товара:" << endl;
    int decQuantity;
    cin >> decQuantity;
    cin.get();
    int index = isGoodOnStock(stock, name);
    if (index > -1)
    {
        if (stock[index].quantity >= decQuantity)
        {
            stock[index].quantity -= decQuantity;
        }
        else
        {
            cout << "На складе недостаточно этого товара для отгрузки"<<endl;
        }
    }
    else
    {
        cout<<"На складе нет такого товара"<<endl;
    }
}
void info(vector<product>& stock)
{
    for (product elem : stock)
    {
        cout << elem.name << " " << elem.quantity << endl;
    }
}
