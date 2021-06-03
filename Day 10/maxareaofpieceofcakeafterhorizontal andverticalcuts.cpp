#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int h,w;
    cin>>h>>w;
    int n1,n2;
    cin>>n1>>n2;
    vector<int> hcuts,vcuts;
    for(int i=0;i<n1;i++){
        int k;
        cin>>k;
        hcuts.push_back(k);
    }
    for(int i=0;i<n2;i++){
        int k;
        cin>>k;
        vcuts.push_back(k);
    }
    sort(hcuts.begin(),hcuts.end());
    sort(vcuts.begin(),vcuts.end());
    int vans=max(vcuts[0]-0,w-vcuts[vcuts.size()-1]);
    int hans=max(hcuts[0]-0,h-hcuts[hcuts.size()-1]);
    if(hcuts.size()!=1)
        for(int i=1;i<hcuts.size();i++)
            hans=max(hans,hcuts[i]-hcuts[i-1]);
    if(vcuts.size()!=1)
        for(int i=1;i<vcuts.size();i++)
            vans=max(vans,vcuts[i]-vcuts[i-1]);
    long long mod=10e8+7;
    cout<<int(hans%mod * vans%mod);
}