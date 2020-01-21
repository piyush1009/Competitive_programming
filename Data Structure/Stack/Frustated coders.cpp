#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,k,x,sum,i,j;
	cin>>n;
	long long int a[n+5];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		{
			a[i]=0;
		}
		else if(a[i]==a[i+1])
		{
			j=i;
			while(j>=0)
			{
				if(a[j]!=0&&a[i]>a[j])
				{
					a[j]=0;
					break;
				}
				else
				j--;
			}
		}
	}
	x=0;
	for(i=0;i<n;i++)
	{
		x=x+a[i];
	}
	cout<<x<<endl;
}
