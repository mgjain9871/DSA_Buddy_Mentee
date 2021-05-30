#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void inc(ll n){
    if(n==1){
        cout<<"1 ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
int main(){
    ll n;
    cin>>n;
    inc(n);
}