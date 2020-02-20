#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double a,b,c,area,s;
		cin>>a>>b>>c;
		s=(a+b+c)/2;
		area=0.5*(a*a*sqrt(3)/4+b*b*sqrt(3)/4+c*c*sqrt(3)/4+3*sqrt(s*(s-a)*(s-b)*(s-c)));
		printf("%.2f\n",area);
	}
}
