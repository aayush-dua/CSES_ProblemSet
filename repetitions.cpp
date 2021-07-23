#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){

    int currmax=0;
    int maxx=0;

    string x;
    cin >> x;
    int n = x.length();
    char l = x[0];
    for(int i=0 ; i < n;i++){
        
        if(x[i] == l ){
            currmax++;
            maxx = max(currmax,maxx);
        }
        else{
            currmax=0;
            l= x[i];
            i--;
            }

    }

    cout << maxx;

    return 0;
}