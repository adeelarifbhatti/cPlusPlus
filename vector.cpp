#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
//& sign make the vec the same variable as data in the append_vector parameter
// now it going to copy the memory which is called passing by reference.
void append_vector(vector<int> &vec, int v){
    cout << "Inside append_vector \n";
    for(int i=0;i<v;i++){
        cout << "Inside append_vector for loop, data.size() \t "<< vec.size()<< "\n";
        vec.push_back(i);
    }
}

void print_vector(vector<int> data){
    for(int i=0;i<data.size();i++){
        std::cout << data[i]<< " data at index " << i <<"\n";
    }
}
int main() {

    std::vector<int> data={1,2,3,4,5};
    int i;
    cin >> i;
    append_vector(data,i);
    print_vector(data);
    cout << "size of the vec is "<< data.size() << "\n";
}