#include <iostream>

void forloop(int i,int j, int array[][3]){

    for(int r=0;r<3;r++){

        for(int c=0;c<3;c++){

            std::cout << array[r][c] <<"\t";

        }
            std::cout << "\n";
    }
}
int main(){

    int grades[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    forloop(3,3,grades);
    
    return 0;
}