#include<bits/stdc++.h>
using namespace std;
int main() 
{
	char txt[] ="AABAACAADAABAAABAA";
    char pat[] ="AABA";
    int n=strlen(txt);
    int m=strlen(pat);
    int i,j;
    for(i=0;i<=n-m;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		if(txt[i+j]!=pat[j])
    		{
    			break;
    	    }
    		if(j==m-1)
    		{
    			cout<<"Pattern found at "<<i<<endl;
			}
		}
	}
	return 0; 
} 

