#include <iostream>
using namespace std;

int main() {
	int a[]={2010,2015,2016,2017,2019};
	int t;
	cin>>t;
	
	while(t--)
	{
	   int n;
	cin>>n; 
	int flag=0;
	for(int i=0;i<5;i++)
	
	{
	    if(a[i]==n)
	   { flag=1;
	       break;
	   }
	}
	if(flag==1)
	cout<<"HOSTED"<<endl;
	else
	cout<<"NOT HOSTED"<<endl;
}}
