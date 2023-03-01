#include <iostream>

using namespace std;

int main(){
    int i=1;
    float cost[31];
    float sumcost = 0;

    // for(i=1; i<=30; i++)
    while(i<=30)
    {
        if(i==1){
            cin>>cost[1];
            sumcost += cost[1];
        }
        else if(i==15){
            cost[15]=0;
            sumcost += cost[15];
        }
        else if(i==16){
            cost[16]=cost[14]*1.2;
            sumcost += cost[16];
        }
        else if(i%2==0){
            cost[i]=cost[i-1]*1.2;
            sumcost += cost[i];
        }
        else if(i%2==1){
            cost[i]=cost[i-1]*0.8;
            sumcost += cost[i];
        }
        i++;
    }

    // for(i=1; i<=30; i++)
    i=1;
    while(i<=30)
    {
        cout<<cost[i]<<"\n"; //<<endl
        i++;
    }

    cout<<sumcost<<" Bath";
    return 0;
}