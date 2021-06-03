#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        ll sum=0;
        cin>>n;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            ll k;
            cin>>k;
            v.push_back(k);
        }
        ll mini=*min_element(v.begin(),v.end());
        ll c=count(v.begin(),v.end(),mini);
        if(c==n)
            cout<<0<<"\n";
        else
            cout<<n-c<<"\n";   
    }
}