#include <iostream>
#include <cstdlib>
#include <clocale>
#include <vector>

using namespace std;

struct product
{
    string name;
    int quantity;
};

void acceptGoods(vector <product>);
void shipGoods(vector <product>);
void info(vector <product>);
int isGoodOnStock(vector <product>, string);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    vector <product> stock={{"консервированный горошек", 10}};
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

int isGoodOnStock(vector <product> stock, string name)
{
    int cnt=0;
    for(product elem: stock)
    {
        if (elem.name==name) return cnt;
        cnt++;
    }
    return -1;
}

void acceptGoods(vector <product> stock)
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
        stock.push_back({name,addQuantity});
    }
    
}

void shipGoods(vector <product>)
{}
void info(vector <product> stock)
{
    for(product elem: stock)
    {
        cout<<elem.name<<" "<<elem.quantity<<endl;
    }
}
