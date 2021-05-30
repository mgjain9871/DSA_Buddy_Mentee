#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,m,d;
        cin>>x>>m>>d;
        ll a=x+d,mul=x*m;
        if(mul>=a)
            cout<<a<<"\n";
        else
            cout<<mul<<"\n";
    }
}