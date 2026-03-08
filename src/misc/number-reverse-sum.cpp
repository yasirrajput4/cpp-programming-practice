#include <iostream>
using namespace std;

int main()
{
    int n, revers = 0;
    cout << "Enter any number : ";
    cin >> n;
    int input_value = n;

    while (n != 0)
    {
        int last_digit = (n % 10);
        revers = revers * 10 + last_digit;
        n = (n / 10);
    }

    cout << revers;
    int total_sum = input_value + revers;
    cout << "\n"
         << "Total number of sum is : " << total_sum;
    return 0;
}