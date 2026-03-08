#include <iostream>
using namespace std;

int fact(int value)
{
    int f = 1;

    for (int l = 1; l <= value; l++)
    {
        f = f * l;
    }
    return f;
}

int ncr(int i, int j)
{
    return fact(i) / (fact(j) * fact(i - j));
}

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)

        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}