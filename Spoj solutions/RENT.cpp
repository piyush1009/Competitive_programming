#include <bits/stdc++.h>
using namespace std;

struct activity{
    int start,finish,weight;
};

bool sortbyfir(activity s1,activity s2) 
{ 
    return s1.finish<s2.finish; 
} 

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
	    cin>>n;
	    activity a[n+5];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i].start>>a[i].finish>>a[i].weight;
	        a[i].finish+=a[i].start;
	    }
        sort(a,a+n,sortbyfir);
        int i=0,j;
        int b[n+5];
		for(i=0;i<n;i++)
		{
			b[i]=a[i].weight;
		}
        for(i=1;i<n;i++)
        {
        	for(j=0;j<i;j++)
        	{
        		if(a[i].start>=a[j].finish)
        		{
        			b[i]=max(b[i],b[j]+a[i].weight);
				}
				else
				{
					break;
				}
			}
		}
		cout<<*max_element(b,b+n)<<endl;
    }
	return 0;
} 
