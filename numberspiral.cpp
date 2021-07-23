#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){

   long int t;
    cin >> t;

    while(t!=0){
        long long int x,y;

        cin >> y >> x ;

        long long int z = max(y,x);
        long long int zp = z*z;
        
        if(y==x){
            cout <<  zp-y+1 << endl;     
        }
        else if(z == y){
            cout <<  zp-x+1 << endl;
        }
        else if(z == x){
            cout <<  zp-y+1 << endl;
        }
    t--;
    }

    return 0;
}

