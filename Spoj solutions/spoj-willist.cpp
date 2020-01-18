#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned long long int n,k;
	scanf("%llu",&n);
	while(n>1)
	{
		if(n%2==0)
		{
			n=n/2;
			k=0;
		}
		else
		{
			k=1;
			printf("NIE");
			break;
		}
	}
	if(k==0)
	{
		printf("TAK");
	}
return 0;
}
