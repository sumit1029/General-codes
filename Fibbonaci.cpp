#include <iostream>
#include <vector>
using namespace std;

vector<int> fibb(int n){
    vector<int> v;
    int a = 0,b = 1;
    v.push_back(0);
    v.push_back(1);
    for(int i = 2; i<=n; i++){
        int temp = b;
        b = a + b;
        a = temp;
        v.push_back(b);
    }

    return v;

}
 
int main(){
    #ifndef Sumit_Kumar
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    vector<int> a = fibb(n);
    for(int i = 0; i<a.size(); i++){
        cout << a[i] << " ";
    }

    return 0;
}