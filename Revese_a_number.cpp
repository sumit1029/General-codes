#include <iostream>
using namespace std;

int main(){
    #ifndef Sumit
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    int reverse = 0, c = 1;
    while(n){
        if(c){
            reverse += n%10;
            c = 0;
            n = n/10;
            continue;
        }

        reverse *= 10;
        reverse += n%10;
        n = n/10;
    }

    cout << reverse << endl;

    return 0;
}