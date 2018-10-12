#include<bits/stdc++.h>
using namespace std;
int main(){
int n=200,i,j;
vector<int>p(201);
map<int,int>sp;
p[0]=1;
p[1]=1;
p[2]=0;
for(i=2;i<n;i++){
	if(p[i]==0){
		for(j=2*i;j<200;j=j+i){
			p[j]=1;
		}
	}
}
for(i=2;i<201;i++) {
	for(j=i+1;j<201;j++){
		if((i*j)>200) break;
		if(p[i]==0&&p[j]==0)
		sp[i*j]=1;
	}
}
map<int,int>::iterator it;
int t,x,flag;
cin>>t;
for(i=0;i<t;i++){
	cin>>x;
	flag=0;
	for(it=sp.begin();it!=sp.end();it++){
		if(it->first>x) break;
		if(sp[it->first]==1&&sp[x-(it->first)]==1) {
		cout<<"YES"<<endl;
		flag=1;
		break;}
	}
	if(flag==0) cout<<"NO"<<endl;
}
}
