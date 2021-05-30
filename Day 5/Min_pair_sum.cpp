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
    sort(nums.begin(),nums.end());
    long long len=nums.size();
    long long i=0,j=len-1,sum=0;
    long long maxi=INT_MIN;
    while(i<len/2){
        sum=nums[i]+nums[j];
        maxi=max(maxi,sum);
        i++;
        j--;
    }
    cout<<maxi;
}