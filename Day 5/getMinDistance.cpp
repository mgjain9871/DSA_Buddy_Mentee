#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,k;
    cin>>n;
    vector<ll> nums;
    for(ll i=0;i<n;i++){
        cin>>k;
        nums.push_back(k);
    }
    ll target,start;
    cin>>target>>start;
    int minimum=INT_MAX,ans=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            ans=abs(i-start);
            minimum=min(minimum,ans);
        }
    }
    cout<<minimum;
}