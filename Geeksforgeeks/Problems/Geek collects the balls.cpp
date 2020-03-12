#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
	    cin>>n>>m;
	    int a[n],b[m];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
		}
		for(j=0;j<m;j++)
	    {
	        cin>>b[j];
		}
		i=0;j=0;
		int first=0,second=0,sum=0;
		while(i<n&&j<m)
		{
			if(a[i]<b[j])
			{
			    first+=a[i];
				i++;				
			}
			else if(a[i]>b[j])
			{
				second+=b[j];
				j++;
			}
			else
			{
				sum+=max(first,second)+a[i];
//				cout<<sum<<" ";
				first=0;
				second=0;
				int temp1=a[i];
				int temp2=b[j];
				i++;j++;
				while(temp1==a[i]&&i<n)
				{
					sum+=a[i];
					i++;
				}
				while(temp2==b[j]&&j<m)
				{
					sum+=b[j];
					j++;
				}
			}
		}
		//first=0;second=0;
		while(i<n)
		{
			first+=a[i];
			i++;
		}
		while(j<m)
		{
			second+=b[j];
			j++;
		}
		sum+=max(first,second);
		cout<<sum<<endl;
    }
	return 0;
} 
