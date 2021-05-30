#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int floorSearch(vector<int> arr,int low,int high, int x){
	if(low>high)
		return -1;		   
    if(x>=arr[high])
		return high;
    int mid=(low+high)/2;	   
	if(arr[mid]==x)
		return mid;
	if(mid>0 && arr[mid-1]<=x && x<arr[mid])
		return mid-1;	    
	if(x<arr[mid])
		return floorSearch(arr,low,mid-1,x);	 
    return floorSearch(arr,mid+1,high,x);
}

int findFloor(vector<int> arr,int n,int x) 
{
	int index=floorSearch(arr,0,arr.size()-1,x);
	if(index==-1)
		return -1;
	return arr[index];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>k;
            v.push_back(k);
        }
        int x;
        cin>>x;
        cout<<findFloor(v,n,x)<<"\n";
    }
}