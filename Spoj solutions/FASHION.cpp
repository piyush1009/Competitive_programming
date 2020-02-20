#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,a[10000],b[10000],ans,i;
		ans=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		sort(a,a+n);
		sort(b,b+n);
		for(i=0;i<n;i++)
		{
			ans=ans+a[i]*b[i];
		}
		cout<<ans<<"\n";
	}
	return 0;
}
