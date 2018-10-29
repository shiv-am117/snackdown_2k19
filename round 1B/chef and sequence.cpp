#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	   int n,k;
	cin>>n>>k;
	vector<int> a;
	int a1;
	for(int i=0;i<n;i++)
	{
	   cin>>a1;
	   a.push_back(a1);
	}
	sort(a.begin(),a.end(),greater<int>());
	for(int j=0;j<k;j++)
	{
	    a[j]=1;
	}int sum=0;int s=0;
	for(int k=0;k<n;k++)
	{
	    sum=sum+a[k];
	    s=s+a[k]*a[k];
	}
	if(s<=sum)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}}

