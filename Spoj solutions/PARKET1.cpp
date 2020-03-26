#include<bits/stdc++.h>
using namespace std;
int main()
{
	double m,n,i,j;
	cin>>m>>n;
	for(i=1;i<=sqrt(m+n);i++)
	{
		j=(m+n)/i;
		if(2*(i+j)==m+4)
		{
			cout<<j<<" "<<i<<endl;
		}
	}
	return 0;
}
