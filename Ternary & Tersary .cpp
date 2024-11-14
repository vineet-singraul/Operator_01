#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the value of a: ";
    cin >> a;

    // Using the ternary operator properly
    (a <= 10) ? cout << "Answer is = " << a << endl << "It is less than or equal to 10." 
              : cout << "Answer is = " << a << endl << "It is greater than 10.";

    return 0;
}
