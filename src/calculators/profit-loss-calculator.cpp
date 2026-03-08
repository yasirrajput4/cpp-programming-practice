#include <iostream>
using namespace std;

int main()
{
    int cost_price, selling_price;
    cout << "Enter the cost price : ";
    cin >> cost_price;
    cout << "Enter the selling price : ";
    cin >> selling_price;

    if (cost_price > selling_price)
    {
        cout << "you made a loss" << endl
             << "you have loss of : " << cost_price - selling_price;
    }
    else if (cost_price < selling_price)
    {
        cout << "you made a profit" << endl
             << "you have profit of : " << selling_price - cost_price;
    }

    else if (cost_price == selling_price)
    {
        cout << "you have not made a profit and lose" << endl;
    }
    return 0;
}