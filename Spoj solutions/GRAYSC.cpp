#include <bits/stdc++.h>
 
#define ll          long long
#define pb          push_back
#define pii         pair<int,int> 
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define F         first
#define S           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define what_is(x)  cerr << #x << " is " << x << endl;
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

const int limit	=	64*2+10;

int main()
{
	int n;
    unsigned ll a[limit];
    cin>>n;
    if(n>=limit)
    {
    	puts("Yes");
    	return 0;
	}
    rep(i,0,n) cin>>a[i];
    rep(i,0,n)
    {
    	rep(j,i+1,n)
    	{
    		rep(k,j+1,n)
    		{
    			rep(l,k+1,n)
    			{
    				if((a[i]^a[j]^a[k]^a[l])==0)
    				{
    					puts("Yes");
    					return 0;
					}
				}
			}
		}
	}
	puts("No");
return 0;
}
