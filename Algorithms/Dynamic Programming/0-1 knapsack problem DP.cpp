#include<bits/stdc++.h>
using namespace std;
int main()
{
	int val[] = {60, 100, 120}; 
    int wt[] = {10, 20, 30}; 
    int  W = 50; 
    int n = sizeof(val)/sizeof(val[0]);
    int i,j,w;
    int k[n+1][W+1];
    for(i=0;i<=n;i++)
    {
    	for(j=0;j<=W;j++)
    	{
    		if(i==0||j==0)
    		{
    			k[i][j]=0;
			}
    		else if(wt[i-1]<=j)
    		{
    			k[i][j]=max(k[i-1][j],val[i-1]+k[i-1][j-wt[i-1]]);
			}
			else
			{
				k[i][j]=k[i-1][j];
			}
		}
	}
	cout<<k[n][W];
	return 0;
}
