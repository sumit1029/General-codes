#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> PrimeinRange(int a, int b){
    vector<int> v;
    while(a<=b){
        bool flag = 1;
        for(int i = 2; i<sqrt(a); i++){
            if(a%i == 0){
                flag = 0;
                break;
            }
        }
        
        if(flag)
            v.push_back(a);
            a++;
    }
    return v;
}

int main(){
    #ifndef Sumit_Kumar
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a, b; cin>>a>>b;
    vector<int> v = PrimeinRange(a, b);
    for(int i = 0; i< v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}