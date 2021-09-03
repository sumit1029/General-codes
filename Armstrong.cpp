#include <iostream>
#include <cmath>
using namespace std;

int main(){
    #ifndef Sumit
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    int temp = n, sum = 0;
    while(n){
        int p = n%10;
        sum += pow(p, 3);
        n = n/10;
    }
    cout << sum << endl;

    if(sum == temp)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not Armstrong Number" << endl;

    return 0;
}