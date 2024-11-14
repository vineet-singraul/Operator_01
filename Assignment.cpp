#include <iostream>
using namespace std;

int main()
{
    // Assignment operators
    int a, b;
    cout << "Enter The Number A : " << endl;
    cin >> a;

    // Assigning value of 'a' to 'b'
    cout << "The " << a << " value assigned to b = " << (b = a) << endl;

    // Incrementing 'a'
    cout << "The " << a << " + Increment a = " << (++a) << endl;

    // Decrementing 'a'
    cout << "The " << a << " - Decrement a = " << (--a) << endl;

    // Multiplying 'a'
    cout << "The " << a << " * Multiply a = " << (a * 2) << endl;

    // Dividing 'a'
    if (a != 0)
        cout << "The " << a << " / Division a = " << (a / 2) << endl;
    else
        cout << "Division by zero is not possible." << endl;

    return 0;
}
