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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll a[n+5];
    	rep(i,0,n)
    	cin>>a[i];
    	int i=0,maxx=a[0],k,step=0;
    	if(n<=1)
    	{
    		cout<<"0"<<endl;
		}
    	if(maxx==0)
    	{
    		cout<<"-1"<<endl;
		}
		else
		{
			while(i<n)
    	    {
    		ll maxee=0,k;
    		step++;
    		for(int j=i+1;j<i+maxx+1;j++)
    		{
    			if(maxee<a[j])
    			{
    				maxee=a[j];
    				k=j;
				}
			}
    		i=k;
    		maxx=maxee;
//    		cout<<i<<" ";
    		if(i>=n-1)
    		break;
		    }
		    cout<<step<<endl;
		}
    }
    return 0;
}
