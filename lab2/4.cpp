#include <iostream>
#include <tuple>
using namespace std;

tuple<int, int, char> foo(int n1, int n2){ //foo ชื่อของ tuple
    return make_tuple(n2, n1, 'a');
}

int main(){
    int a, b;
    char cc;

    tie(a, b, cc) = foo(5, 10);

    cout << "Values returned by tuple: ";
    cout << a << " " << b << " " << cc << endl;
    
    return 0;
}