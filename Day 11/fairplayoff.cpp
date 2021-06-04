#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans1=max(a,b);
        int ans2=max(c,d);
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        pq.push(d);
        int max1=pq.top();
        pq.pop();
        int max2=pq.top();
        if((ans1==max1 or ans1==max2) and (ans2==max1 or ans2==max2))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}