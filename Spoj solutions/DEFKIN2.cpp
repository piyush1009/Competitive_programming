#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int w,h,n;
		cin>>w>>h>>n;
		if(n==0)
		{
			cout<<w*h<<endl;
		}
		else if(n>=min(w,h))
		{
			cout<<0<<endl;
		}
		else
		{
			w-=n;
			h-=n;
			int p=w/(n+1);
			int q=h/(n+1);
			if(w%(n+1)) p++;
			if(h%(n+1)) q++;
			cout<<p*q<<endl;
		}
	}
	return 0;
}
