// #include <iostream>
// using namespace std;

// void reset(int *zero){
//     int i;
//     for(i=0; i<=4; i++){
//         *(zero+i) = 0;
//     }
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int i;
//     for(i=0; i<=4; i++){
//         cout << arr[i];
//     }
    
//     reset(&arr[0]);
    
//     cout << endl;
//     for(i=0; i<=4; i++){
//         cout << arr[i];
//     }
    
//     return 0;
// }

#include <iostream>
using namespace std;

void reset(int *zero, int s){
    int i;
    for(i=0; i<s; i++){
        *(zero+i) = 0;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int i;
    for(i=0; i<size(arr); i++){
        cout << arr[i];
    }
    
    reset(&arr[0], size(arr));
    
    cout << endl;
    for(i=0; i<=4; i++){
        cout << arr[i];
    }
    
    return 0;
}