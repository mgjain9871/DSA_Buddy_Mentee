#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int getMinDiff(int arr[], int n, int k) {
    sort(arr,arr+n);
    int ans=arr[n-1]-arr[0];
    int maxi=INT_MIN,mini=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]>=k){
            maxi=max(arr[i-1]+k,arr[n-1]-k);
            mini=min(arr[0]+k,arr[i]-k);
            ans=min(ans,maxi-mini);
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int ans=getMinDiff(arr,n,k);
        cout<<ans<<" ";
    }
}