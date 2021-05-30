#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,k,a;
        cin>>n>>m>>k;
        vector<ll> v;
        for(ll i=0;i<k;i++){
            cin>>a;
            v.push_back(a);
        }
        map<ll,ll> mm;
        for(ll i=0;i<v.size();i++){
            if(mm.find(v[i])==mm.end())
                mm[v[i]]=1;
            else
                mm[v[i]]++;
        }
        vector<ll> x;
        ll c=0;
        for(auto it: mm){
            if(it.first<n+1){
                if(it.second>1){
                    x.push_back(it.first);
                    c++;
                }
            }
        }
        cout<<c<<" ";
        for(auto it : x)
            cout<<it<<" ";
        cout<<"\n";
    }
}