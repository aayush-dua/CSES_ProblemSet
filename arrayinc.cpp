#include <iostream>
using namespace std;
int main(){
    
    long n;
    cin >> n;
    long int counter=0;
    long arr[n];

    for(long i = 0 ;i< n; i++){
        cin >> arr[i];
    }

    for(long int i = 1; i < n;i++){
        while(arr[i]<arr[i-1]){
            arr[i] += 1;
            counter++;
        }
    }
    cout << counter;

    return 0;
}