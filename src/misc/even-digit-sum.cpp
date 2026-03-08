#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter any number : ";
    cin >> n;

    while (n != 0)
    {
        int last_digit = (n % 10);

        if (last_digit % 2 == 0)
        {
            sum = sum + last_digit;
        }
        n = (n / 10);
    }

    cout << "sum of even number is : " << sum;
    return 0;
}