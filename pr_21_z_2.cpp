#include <iostream>
#include <cstdlib>
#include <clocale>
#include <list>

using namespace std;

struct product
{
    string name;
    int quantity;
};

void acceptGoods(product []);
void shipGoods(product []);
void info(product []);
int isGoodOnStock(product [], string);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    product stock[100];
    int n;
    cout<<"Веберите, что хотите сделать:"<<endl;
    cout<<"1 - принять товар на склад:"<<endl;
    cout<<"2 - отгрузить товар со склада:"<<endl;
    cout<<"3 - вевести иформацию о товаре на складе:"<<endl;
    cin>>n;
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
    default:
        return 0;
        break;
    }
    return 0;
}

int isGoodOnStock(product stock[], string name)
{
    for(int i; i<100;i++)
    {
        if (stock[i].name==name)
        return i;
    }
    return -1;
}

void acceptGoods(product stock[])
{
    cout<<"Введите название товара:"<<endl;
    string name;
    cin>>name;
    cout<<"Введите количество товара:"<<endl;
    int addQuantity;
    cin>>addQuantity;
    int index=isGoodOnStock(stock, name);
    if (index>-1)
    {
        stock[index].quantity+=addQuantity;
    }
    else
    {
        /* code */
    }
    
}

void shipGoods(product [])
{}
void info(product [])
{}
