#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
    b*=2;
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            ll k;
            cin>>k;
            v.push_back(k);
        }
        vector<ll> even,odd;
        for(ll i=0;i<n;i++){
            if(v[i]%2==0)
                even.push_back(v[i]);
            else
                odd.push_back(v[i]);
        }
        ll size=even.size();
        even.insert(even.begin()+size,odd.begin(),odd.end());
        ll c=0;
        for(ll i=0;i<n-1;i++){
            for(ll j=i+1;j<n;j++){
                if(gcd(even[i],even[j])>1)    
                    c++;
            }
        }
        cout<<c<<"\n";
    }
}
