#include <iostream>

using namespace ::std;

int main() {
    cout << "This program will print the product of two numbers" << endl;
    cout << "Enter the numbers " << endl;
    int a, b = 0;

    cin >> a >> b;
    int product = a * b;

    cout << "The product of " << a << " and " << b << " is " << product << endl;

    return 0;
}