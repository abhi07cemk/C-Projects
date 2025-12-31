#include <iostream>
#include <cmath>
using namespace std;


void basicCalculator();
void scientificCalculator();
long long factorial(int n);

int main()
{
    int choice;

    do
    {
        cout << "\n========== CALCULATOR PROJECT ==========\n";
        cout << "1. Basic Calculator\n";
        cout << "2. Scientific Calculator\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            basicCalculator();
            break;

        case 2:
            scientificCalculator();
            break;

        case 0:
            cout << "Thank you for using Calculator!\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 0);

    return 0;
}


void basicCalculator()
{
    int choice;
    double a, b;

    cout << "\n----- Basic Calculator -----\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice)
    {
    case 1:
        cout << "Result = " << a + b << endl;
        break;

    case 2:
        cout << "Result = " << a - b << endl;
        break;

    case 3:
        cout << "Result = " << a * b << endl;
        break;

    case 4:
        if (b != 0)
            cout << "Result = " << a / b << endl;
        else
            cout << "Error: Division by zero!\n";
        break;

    case 5:
        cout << "Result = " << (int)a % (int)b << endl;
        break;

    default:
        cout << "Invalid operation!\n";
    }
}


void scientificCalculator()
{
    int choice, n;
    double x;

    cout << "\n----- Scientific Calculator -----\n";
    cout << "1. Power (x^y)\n";
    cout << "2. Square Root\n";
    cout << "3. Sine\n";
    cout << "4. Cosine\n";
    cout << "5. Tangent\n";
    cout << "6. Logarithm (base 10)\n";
    cout << "7. Factorial\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        double y;
        cout << "Enter base and exponent: ";
        cin >> x >> y;
        cout << "Result = " << pow(x, y) << endl;
        break;

    case 2:
        cout << "Enter number: ";
        cin >> x;
        cout << "Result = " << sqrt(x) << endl;
        break;

    case 3:
        cout << "Enter angle in degrees: ";
        cin >> x;
        cout << "Result = " << sin(x * 3.14159 / 180) << endl;
        break;

    case 4:
        cout << "Enter angle in degrees: ";
        cin >> x;
        cout << "Result = " << cos(x * 3.14159 / 180) << endl;
        break;

    case 5:
        cout << "Enter angle in degrees: ";
        cin >> x;
        cout << "Result = " << tan(x * 3.14159 / 180) << endl;
        break;

    case 6:
        cout << "Enter number: ";
        cin >> x;
        cout << "Result = " << log10(x) << endl;
        break;

    case 7:
        cout << "Enter number: ";
        cin >> n;
        cout << "Result = " << factorial(n) << endl;
        break;

    default:
        cout << "Invalid choice!\n";
    }
}


long long factorial(int n)
{
    if (n < 0)
        return -1;

    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}
