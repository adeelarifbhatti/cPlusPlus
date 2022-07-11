#include <iostream>
#include <fstream>

using std::cout;
using std::cin;

int main(){

    cout << "Please enter the file name\n";
    std::string filename;
    cin >> filename;
    std::ofstream file (filename.c_str(),std::ios::app);
    if(file.is_open()){
        cout << "File opened successfully\n";
    }
    for(int i=0;i<100;i++){
        file <<" testing files "<< i << std::endl;
    }
}