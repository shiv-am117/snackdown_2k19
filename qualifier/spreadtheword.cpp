#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++) cin>>a[i];
		int sum=0,st=1,ans=0,l=0;
		while(st<n){
			ans++;
			for(i=l;i<st;i++){
				sum+=a[i];
				if(st+sum>=n) break;
			}
			l=i;
			st+=sum;
		
			
		}
		cout<<ans<<endl;
	}
}
