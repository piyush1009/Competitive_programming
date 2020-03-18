#include <bits/stdc++.h>
using namespace std;

struct activity{
    int start,finish,index;
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
	    activity a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i].start>>a[i].finish;
	        a[i].index=i;
	    }
        sort(a,a+n,sortbyfir);
        int i=0,j;
        int k=1;
        for(j=1;j<n;j++)
        {
            if(a[j].start>=a[i].finish)
            {
                k++;
                i=j;
            }
        }
        cout<<k<<endl;
    }
	return 0;
} 
