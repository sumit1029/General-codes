#include <iostream>
#include <cmath>
using namespace std;

int main(){
    #ifndef Sumit_Kumar
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // This implimentation contains a bug

    int n; cin>>n;
    bool flag = 1;  
    for(int i = 2; i<sqrt(n); i++){
        if(n%i == 0){
            flag = 0;
        }
    }

    if(flag)
        cout << "Prine Number" << endl;
    else
        cout << "Not a Prime Number" << endl;

    return 0;
}