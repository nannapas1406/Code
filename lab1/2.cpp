#include <iostream>
using namespace std;

int main(){
    int walk[] = {1, 2, 1, 3, 1, 2, 2, 1, 3, 2, 4, 1, 2, 3, 1, 4, 1, 2, 1, 3, 1, 2, 1, 1, 4};
    int x=0, y=0;
    int i;
    
    for(i=0;i<=size(walk);i++){
        // if(walk[i]==1){
        //     y += 1;
        // }
        // else if(walk[i]==2){
        //     x -= 1;
        // }
        // else if(walk[i]==3){
        //     y -= 1;
        // }
        // else if(walk[i]==4){
        //     x += 1; 
        // }
        switch(walk[i]){
            case 1:
                y += 1;
                break;
            case 2:
                x -= 1;
                break;
            case 3:
                y -= 1;
                break;
            case 4:
                x += 1;
                break;
        }
        if(x==0 && y==0){
            x = 1;
            y = 1;
        }
    }

    cout<<x<<", "<<y;

    return 0;

}
