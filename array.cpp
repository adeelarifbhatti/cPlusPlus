#include <iostream>

using std::cin;
using std::cout;

int main() {
    void print_array(int[],int);
    int guesses[100]={};
    int guess;
    int size = sizeof(guesses) / sizeof(guesses[0]);

    cout << "Please Enter the size \n current size is " << size << "\n";
    cin >> guess;
    int count =0;

    for (int i=0; i<size; i++ ){
        if(cin >> guesses[i]){
        /*guesses[i]=guess;
        cout << "inside loop, current size is " << size << "\n";
        cout << "array \t" << "\n"<< guesses[size] <<"\n" ;
        count++;
        */
        count++;
        }
        else {
          break;
         }
     
    }
    print_array(guesses,count);  
}
    void print_array(int array[], int size){
        for(int i=0; i<size;i++){
            cout << " inside print array  " << array[i] << "\n";
        }
        cout << std::endl;
    }