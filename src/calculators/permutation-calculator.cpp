#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

long long fact(int n)
{
    if (n < 0)
    {
        throw runtime_error("Factorial is not defined for negative numbers");
    }

    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    try
    {
        int n, r;
        cout << "Enter n (must be positive): ";

        if (!(cin >> n) || n < 0)
        {
            cout << "Error: Please enter a valid positive number for n" << endl;
            return 1;
        }

        cout << "Enter r (must be positive and less than or equal to n): ";

        if (!(cin >> r) || r < 0)
        {
            cout << "Error: Please enter a valid positive number for r" << endl;
            return 1;
        }

        if (r > n)
        {
            cout << "Error: r cannot be greater than n" << endl;
            return 1;
        }

        long long a = fact(n);
        long long b = fact(n - r);

        if (b == 0)
        {
            cout << "Error: Invalid calculation (n-r)!" << endl;
            return 1;
        }

        long long c = (a / b);
        cout << "Permutation is: " << c << endl;

        return 0;
    }
    catch (const exception &e)
    {
        cout << "Error: " << e.what() << endl;
        return 1;
    }
}