#include <bits/stdc++.h>
using namespace std;
int main() {
	int r,c;
	cin>>r>>c;
	char a[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	map<char,int>mp_r;
	map<char,int>mp_c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]=='S'){
				mp_r[i]++;
				mp_c[j]++;
			}
		}
	}
	cout<<( ( r-mp_r.size() )*c )+( (c-mp_c.size())*r - (r-mp_r.size())*(c-mp_c.size()) );
	return 0;
}