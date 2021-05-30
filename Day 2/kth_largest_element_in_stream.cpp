#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> v(n);
	priority_queue<int,vector<int>,greater<int>> pq;
    for (int i=0;i<n;i++) {
    	if (pq.size()<k)
    		pq.push(arr[i]);
    	else {
    		if(arr[i]>pq.top()){
    			pq.pop();
    			pq.push(arr[i]);
    		}
    	}
    	if(pq.size()<k)
    		v[i]=-1;
    	else
    		v[i]=pq.top();
	}
	for(auto it : v)
        cout<<it<<" ";

}