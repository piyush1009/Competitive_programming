#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,sum,i;
	while(cin>>a>>b)
	{
		sum=0;
		if(b>a)
		{
		for(i=a;i<=b;i++)
		{
			sum=sum+i;
		}
	    }
	    if(a>=b)
	    {
		for(i=b;i<=a;i++)
		{
			sum=sum+i;
		}
        }
		cout<<sum<<endl;
	}
	return 0;
}
