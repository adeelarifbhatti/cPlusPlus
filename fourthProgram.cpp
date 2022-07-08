#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main() {

    int base, exponent;
    cout << "What is the base ?\n";
    cin >> base;
    cout << "what is the exponent ?\n";
    cin >> exponent;
    double  answer = pow(base,exponent);
    cout << "The result is " << answer <<"\n";

}