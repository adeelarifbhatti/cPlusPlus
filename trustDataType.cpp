#include <iostream>
#include <float.h>
using std::cout;

int main() {

    cout  << " Double can be trusted with "<< DBL_DIG <<" digits" << std::endl;
    cout  << " Double MAX "<< DBL_MAX <<" digits" << std::endl;

        
    cout  << " Long Double can be trusted with "<< LDBL_DIG <<" digits" << std::endl;
    cout  << " Long Double max is "<< LDBL_MAX <<" digits" << std::endl;


    cout  << " Float can be trusted with "<< FLT_DIG <<" digits" << std::endl;
    cout  << " Float max is "<< FLT_MAX <<" digits" << std::endl;

}