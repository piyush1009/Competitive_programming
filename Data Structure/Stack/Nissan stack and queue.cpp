#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,k,x,sum,i;
	cin>>n;
	cin>>k;
	sum=0;
	long long int a[n+5];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<k;i++)
	{
		sum=sum+a[i];
	}
	x=sum;
	for(i=0;i<k-1;i++)
	{
		sum=sum+a[n-i-1]-a[k-i-1];
		if(sum>=x)
		{
			x=sum;
		}
	}
	cout<<x<<endl;
}
