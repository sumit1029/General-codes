#include <iostream>
using namespace std;

int NaturalSum(int n){
    int num = n*(n+1);
    return (num/2);
}

int main(){
    #ifndef Sumit_Kumar
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    cout << "Sum of " << n << " natural no. = " << NaturalSum(n);

    return 0;
}