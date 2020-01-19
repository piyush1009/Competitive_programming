#include<bits/stdc++.h>
using namespace std;

void shared(char *p1,char *p2)
{
	int count[256]={0};
	while(*p1)
	{
		count[*p1++]++;
	}
	while(*p2)
	{
		if(count[*p2]>0)
		{
			printf("%c",*p2);
		}
		p2++;
	}
	printf("\n");
}

int main()
{
	while(1)
	{
		char a[1001],b[1001];
		scanf("%s",&a);
		scanf("%s",&b);
		int k=strlen(a);
		shared(a,b);
	}
return 0;
}
