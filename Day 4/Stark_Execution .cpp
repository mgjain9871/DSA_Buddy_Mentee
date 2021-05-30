#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n;
    cin>>n;
    vector<ll> v;
    v.push_back(0);
    v.push_back(1);
    for(ll i=2;i<n;i++)
        v.push_back(v[i-1]+v[i-2]);
    for(ll i=0;i<n;i++){
        if(i+1==n){
            v[i]%2!=0?cout<<"Alive":cout<<"Dead";
            break;
        }
    }
	return 0;
}