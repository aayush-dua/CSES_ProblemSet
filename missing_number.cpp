#include <iostream>
#include <cmath>
using namespace std;

int main(){

    long long int n;
    cin >> n;

    int arr[n];
    long long int sum = 0;
    for(long long int i = 0 ; i < n-1 ; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    long long int s;
    s = (n+1)*(n) / 2;

    cout << abs(sum - s); 

    return 0;
}