#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin>>s;
    int n = s.size(),k=3;
    int ans = 0;
    unordered_map<char, int> m;
    for (int i=0;i<k;i++)
        m[s[i]]++;
    if (m.size()==k)
        ans++;
    for(int i=k;i<n;i++){
        m[s[i]]++;
        m[s[i-k]]--;
        if(m[s[i-k]]==0)
            m.erase(s[i-k]);
        if(m.size()==k)
            ans++;
    }
    cout<<ans;
}