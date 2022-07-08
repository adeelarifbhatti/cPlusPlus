#include <iostream>

using std::cout;
using std::cin;

double power(double, int);

int main() 
{

    int base, exponent;
    cout << "What is the base ?\n";
    cin >> base;
    cout << "what is the exponent ?\n";
    cin >> exponent;
    double  answer = power( base, exponent );
    cout << "The answer is " << answer << "\n";

}

double power(double base, int exponent)
 {
    double result = 1;
    for (int i=0;i<exponent;i++)
    {
        result = result * base;
    }

    return result;
}