#include<bits/stdc++.h>
using namespace std;
int main() 
{ 
  char X[] = "AGGTAB"; 
  char Y[] = "GXTXAYB"; 
  int m = strlen(X); 
  int n = strlen(Y);
  int l[m+1][n+1];
  int i,j;
  for(i=0;i<=m;i++)
  {
  	for(j=0;j<=n;j++)
  	{
  		if(i==0||j==0)
  		{
  			l[i][j]=0;
		}
		else if(X[i-1]==Y[j-1])
		{
			l[i][j]=l[i-1][j-1]+1;
		}
		else
		{
			l[i][j]=max(l[i-1][j],l[i][j-1]);
		}
	}
  }
  cout<<l[m][n];
  return 0; 
} 

