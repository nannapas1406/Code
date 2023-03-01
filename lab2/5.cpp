#include <iostream>
using namespace std;

void sw(int *n1, int *n2){
    int a = *n1;
    *n1 = *n2;
    *n2 = a;
}

int main(){
    int n1 = 1;
    int n2 = 2;

    sw(&n1, &n2);

    cout << n1 << endl;
    cout << n2;
    
    return 0;
}