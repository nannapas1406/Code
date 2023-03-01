#include <iostream>
using namespace std;

void callByValue(int x){
    x = 3;
}

void callByReference(int *y){
    *y = 7;
}

int main(){
    int a = 0;
    int b = 1;

    callByValue(a);

    callByReference(&b);

    cout << a << endl;
    cout << b;

    return 0;
}