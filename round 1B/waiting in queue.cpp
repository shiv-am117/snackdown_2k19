#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	  long long int n,m,k,l;
	  cin>>n>>m>>k>>l;
	  vector<int> a;
	  int a1;
	  for(int i=0;i<n;i++)
	  {
	      cin>>a1;
	      a.push_back(a1);
	  }
	  int m1=m*l;
	   a.push_back(k);
	  sort(a.begin(),a.end());
	 
	  int min=INT_MAX;
	  for(int i=0;i<n+1;i++)
	 
	 {      if(a[i]<=k){
	     
	      int s=m1+l*i-a[i];
	 s=s+l;
	 if(s<min)
	 min=s;
	 }
	 
	 
	     
	 }
	 cout<<min<<endl;
	  
}}

