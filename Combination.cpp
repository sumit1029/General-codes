#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1)
        return 1;
    return n*factorial(n-1);
}

int combination(int n, int r){
    int din = factorial(n-r)*factorial(r);
    return (factorial(n)/din);
}

int main(){
    #ifndef Sumit_Kumar
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, r; cin>>n>>r;
    cout << "Total No. of possible combinations are = " << combination(n, r);

    return 0;
}