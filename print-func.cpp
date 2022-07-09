#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

void just_print(string);

int main()
{
    just_print("My first void function");
}


void just_print(string stn) {

    cout << "enter the string\n";
    cin >> stn;


    cout << " you entered\n " << stn <<"\n";
}