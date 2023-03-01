#include <iostream>
using namespace std;

int main(){
    int var = 0;
    int *ptr_var = NULL;
    ptr_var = &var;

    *ptr_var = 3;
    cout << var << endl; //*ptr_var
    cout << &var; //ptr_var

    return 0;
}