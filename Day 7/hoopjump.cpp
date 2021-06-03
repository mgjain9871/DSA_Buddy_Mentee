#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        double n;
        cin>>n;
        if(n==1){
            cout<<1<<"\n";
            continue;
        }
        cout<<ceil(n/2)<<"\n";
    }
}