#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int c=0;
    set<int> s1(a,a+n);
    set<int> s2(b,b+m);
    for(auto itr=s1.begin();itr!=s1.end();itr++){
        int num=*itr;
        auto it=s2.find(num);
        if(it!=s2.end())
            c++;
    }
    cout<<c;
}