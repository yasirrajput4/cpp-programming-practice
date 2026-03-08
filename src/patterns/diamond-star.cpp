#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    int ml = (n / 2) + 1;
    int nofspace = (n / 2);
    int nofstar = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nofspace; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= nofstar; k++)
        {
            cout << "*";
        }

        if (i < ml)
        {
            nofspace--;
            nofstar += 2;
        }
        else
        {
            nofspace++;
            nofstar -= 2;
        }
        cout << endl;
    }
    return 0;
}