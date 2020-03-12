#include <bits/stdc++.h>
using namespace std;

struct activity{
    int start,finish,index;
}

bool sortbyfir(activity s1,activity s2) 
{ 
    return s1.finish<s2.finish; 
} 

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
	    cin>>n;
	    activity a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i].start;
	        a[i].index=i;
	    }
        for(int i=0;i<n;i++)
        {
	        cin>>a[i].finish;
        }
        sort(a,a+n,sortbyfir);
        int i=0,j;
        cout<<a[i].index+1<<" ";
        for(j=1;j<n;j++)
        {
            if(a[j].start>=a[i].finish)
            {
                cout<<a[j].index+1<<" ";
                i=j;
            }
        }
        cout<<endl;
    }
	return 0;
} 
