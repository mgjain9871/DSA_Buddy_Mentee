#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    vector<ll> nums;
    nums.push_back(12);
    nums.push_back(0);
    ll n=2;
    vector<ll> v;
    ll pdt=1,c=0;
    for(ll i=0;i<n;i++){
        if(nums[i]!=0)
            pdt=nums[i]*pdt;
        else
            c++;
    }
    for(ll i=0;i<n;i++){
        if(c!=0){
            if(nums[i]==0)
                v.push_back(pdt/nums[i]);
            else
                v.push_back(0);
        }
        else
            v.push_back(pdt/nums[i]);
    }
    for(auto it : v)
        cout<<it<<" ";
}