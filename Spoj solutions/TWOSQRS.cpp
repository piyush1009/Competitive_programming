#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,i,a[1000001];
	cin>>t;
	for(i=0;i<=1000001;i++)
	{
		a[i]=i*i;
	}
	while(t--)
	{
		long long int n,m,j,x;
		cin>>n;
		i=0;
		j=sqrt(n);
		while(i<=j)
		{
			x=a[i]+a[j];
			if(x==n)
			break;
			else if(x<n)
			i++;
			else
			j--;
		}
		if(i<=j)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	return 0;
}
