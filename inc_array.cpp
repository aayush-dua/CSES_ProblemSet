#include <iostream>
using namespace std;
int main(){
    
    long n;
    cin >> n;
    int counter=0;
    long arr[n];

    for(long i = 0 ;i< n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i < n;i++){
        while(arr[i]<arr[i-1]){
            arr[i-1] + 1;
            counter++;
        }
    }
    cout << counter;

    return 0;
}