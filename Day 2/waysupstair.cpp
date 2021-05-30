#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int waysUpStair(int n)
{
	if(n<0)
        return 0;
    if(n<=2)
        return n;
   	if(n==3)
        return 4;
    return waysUpStair(n-1)+waysUpStair(n-2)+waysUpStair(n-3);
}

int main(){
    int n;
    cin>>n;
    cout<<waysUpStair(n);
}