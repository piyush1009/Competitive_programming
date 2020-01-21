#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,k,x,sum,i,jo,je,maxo,maxe,t;
	cin>>n;
	cin>>k;
	long long int a[n+5];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	maxo=-1000;
	maxe=-1000;
	for(i=1;i<=k+1;i=i+2)
	{
		if(maxo<a[i])
		{
			maxo=a[i];
			jo=i;
		}
	}
	for(i=2;i<=k;i=i+2)
	{
		if(maxe<a[i])
		{
			maxe=a[i];
			je=i;
		}
	}
	
	if(n==1&&k==1)
	{
		cout<<"-1"<<endl;
	}
	else if(k%2==0)
	{
		cout<<maxo<<endl;
	}
	else
	{
		cout<<maxe<<endl;
	}
return 0;
}

