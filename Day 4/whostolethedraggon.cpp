#include <bits/stdc++.h>
typedef long long ll;
int main() {
    ll n,k;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    ll len=v.size();
    ll i=0,j=len-1,sum=0;
    ll maxi=INT_MIN,mini=INT_MAX;
    while(i<len/2){
        sum=v[i]+v[j];
        maxi=max(maxi,sum);
        mini=min(mini,sum);
        i++;
        j--;
    }
    cout<<maxi-mini;
	return 0;
}