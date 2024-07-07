#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    if(n % 2 == 1){
        cout<<"NO\n";
    }
    else{
        int pot2max=1,potmin=1;
        while (pot2max<=n) pot2max*=2;
        pot2max/=2;

        
        while(potmin<pot2max){

            if( (bool)(n&potmin) == !((bool)(n&pot2max))){
                cout<<"NO\n";
                return 0;
            }
            pot2max/=2;
            potmin*=2;
        }

        cout<<"YES\n";
    }
    return 0;
}