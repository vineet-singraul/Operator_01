#include <iostream>
using namespace std;

int main()
{
    // Relational operators
    int a, b;
    cout << "Enter the number A: " << endl;
    cin >> a;
    cout << "Enter the number B: " << endl;
    cin >> b;

    cout << "If Yes = 1  :::::   If No = 0" << endl;
    cout << "Is " << a << " equal to " << b << " : " << (a == b) << endl;
    cout << "Is " << a << " less than " << b << " : " << (a < b) << endl;
    cout << "Is " << a << " greater than " << b << " : " << (a > b) << endl;
    cout << "Is " << a << " less than or equal to " << b << " : " << (a <= b) << endl;
    cout << "Is " << a << " greater than or equal to " << b << " : " << (a >= b) << endl;

    return 0;
}
