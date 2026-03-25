#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int value = 1;
        int a = n - i + 1;

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << value;
            value++;
        }

        for (int k = 1; k <= i - 1; k++)
        {
            cout << "*";
        }

        for (int l = 1; l <= i - 1; l++)
        {
            cout << "*";
        }

        for (int m = 1; m <= n - i + 1; m++)
        {
            cout << a;
            a--;
        }
        cout << endl;
    }
    return 0;
}