#include <iostream>
#include <cmath> // For sqrt
using namespace std;

int main()
{
    int n;
    bool isComposite = false;

    cout << "Enter any number: ";
    cin >> n;

    if (n < 2)
    {
        cout << "Not a prime and not a composite number" << endl;
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isComposite = true;
            break;
        }
    }

    if (isComposite)
    {
        cout << n << " is a composite number." << endl;
    }
    else
    {
        cout << n << " is a prime number." << endl;
    }

    return 0;
}
