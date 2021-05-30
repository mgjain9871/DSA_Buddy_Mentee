#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
    ll c1=0,c2=0;
    for(ll i=0;i<s.length();i++){
        if(int(s[i])>=97 and int(s[i])<=109)
            c1++;
        else if(int(s[i]>=78 and int(s[i])<=90))
            c2++;
    }
    if(c1==s.length() or c2==s.length())    
        return true;
    return false; 
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        vector<string> v;
        string s;
        for(ll i=0;i<k;i++){
            cin>>s;
            v.push_back(s);
        }
        bool temp=true;
        for(ll i=0;i<v.size();i++){
            if(check(v[i])==false){
                temp=false;
                break;
            }
        }
        if(temp)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}