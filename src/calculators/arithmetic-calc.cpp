#include <iostream>
using namespace std;

int main()
{
    double a, c, e;
    char b, d;

    // Get input with validation
    cout << "Enter first number: ";
    if (!(cin >> a))
    {
        cout << "Error: Invalid input for first number!" << endl;
        return 1;
    }

    cout << "Enter first operator (+, -, *, /): ";
    if (!(cin >> b))
    {
        cout << "Error: Invalid input for first operator!" << endl;
        return 1;
    }

    cout << "Enter second number: ";
    if (!(cin >> c))
    {
        cout << "Error: Invalid input for second number!" << endl;
        return 1;
    }

    cout << "Enter second operator (+, -, *, /): ";
    if (!(cin >> d))
    {
        cout << "Error: Invalid input for second operator!" << endl;
        return 1;
    }

    cout << "Enter third number: ";
    if (!(cin >> e))
    {
        cout << "Error: Invalid input for third number!" << endl;
        return 1;
    }

    // Validate operators
    if ((b != '+' && b != '-' && b != '*' && b != '/') ||
        (d != '+' && d != '-' && d != '*' && d != '/'))
    {
        cout << "Error: Invalid operator! Use only +, -, *, or /" << endl;
        return 1;
    }

    // Check for division by zero
    if ((b == '/' && c == 0) || (d == '/' && e == 0))
    {
        cout << "Error: Division by zero is not allowed!" << endl;
        return 1;
    }

    double result;
    // First operation
    if (b == '+')
        result = a + c;
    else if (b == '-')
        result = a - c;
    else if (b == '*')
        result = a * c;
    else if (b == '/')
        result = a / c;

    // Second operation
    if (d == '+')
        result += e;
    else if (d == '-')
        result -= e;
    else if (d == '*')
        result *= e;
    else if (d == '/')
    {
        if (e == 0)
        {
            cout << "Error: Division by zero is not allowed!" << endl;
            return 1;
        }
        result /= e;
    }

    cout << "Result: " << result << endl;
    return 0;
}
