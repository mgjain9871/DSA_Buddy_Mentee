#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string print(int n){
    if(n==1)
    return "1";
    if(n==2)
        return "11";
    string s="11";
    for(int i=3;i<=n;i++){
        s+="$";
        int count=1;
        string temp="";
        int len=s.length();
        for(int j=1;j<len;j++){
            if(s[j]!=s[j-1]){
                temp+=count+'0';
                temp+=s[j-1];
                count=1;
            }
            else
                count++;
        }
        s=temp;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    cout<<print(n);
}