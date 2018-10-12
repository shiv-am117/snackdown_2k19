#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,i,ans;
		cin>>n>>k;
		int a[n];
		for(i=0;i<n;i++) cin>>a[i];
		sort(a,a+n,greater<int>());
		ans=k;
		for(i=k;i<n;i++){
			if(a[i]==a[k-1]) ans++;
		}
		cout<<ans<<endl;
	}
	
}
