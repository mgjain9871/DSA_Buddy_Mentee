#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<long long> v(arr,arr+n);
    v.insert(v.begin()+n,arr,arr+n);
    while(n--){
        cout<<v[d]<<" ";
        d++;
    }
}