#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i,j,flag=1,r;
		cin>>n;
		int a[n],b[n],diff[n];
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++) cin>>b[i];
		for(i=0;i<n;i++) diff[i]=b[i]-a[i];
		for(i=0;i<n-2;i++){
			if(diff[i]<0){
				flag=0;
				break;
				
			}
			r=diff[i];
			diff[i]-=r;
			diff[i+1]-=2*r;
			diff[i+2]-=3*r;
		}
		if(flag==0) cout<<"NIE"<<endl;
		else if(diff[n-1]!=0||diff[n-2]!=0) cout<<"NIE"<<endl;
		else cout<<"TAK"<<endl;
		
	}
}
