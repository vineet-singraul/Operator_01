#include <iostream>
using namespace std;

int main() {
    // Logical operators example
    int a, b;
    cout << "Enter the number A: " << endl;
    cin >> a;
    cout << "Enter the number B: " << endl;
    cin >> b;

    // Logical AND (&&)
    cout << "Checking if both A and B are greater than 0: " << ((a > 0) && (b > 0)) << endl;

    // Logical OR (||)
    cout << "Checking if either A or B is greater than 0: " << ((a > 0) || (b > 0)) << endl;

    // Logical NOT (!)
    cout << "Checking if A is not equal to B: " << !(a == b) << endl;

    return 0;
}
