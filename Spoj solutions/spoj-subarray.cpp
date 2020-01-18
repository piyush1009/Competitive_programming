#include<stdio.h>
int main()
{
	long int n,a[10000],k,q,i,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	scanf("%ld",&k);
	max=-100001;
	q=0;
	for(i=q;i<k+q;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		printf("%ld ",max);
		q++;break;
	}
return 0;
}
