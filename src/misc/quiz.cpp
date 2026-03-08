#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number of row : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ans = 1;

        for (int j = 0; j < i + 1; j++)
        {
            cout << ans;
            ans++;
        }
        cout << endl;
    }
    return 0;
}