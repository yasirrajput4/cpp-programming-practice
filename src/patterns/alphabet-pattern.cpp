#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows : ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        char start = 'D' - i + 1;
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
    return 0;
}
