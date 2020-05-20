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

int main()
{
	ll n;
	cin>>n;
	while(n!=-1)
	{
		ll a[n+5],b[n+5],sum=0;
		cin>>a[0];
		sum=a[0];
	    rep(i,1,n)
		{
	    	cin>>a[i];
	    	sum+=a[i];
	    	a[i]=a[i]+a[i-1];
		}
	    if(sum%n)
	    {
	    	cout<<-1<<endl;
		}
		else
		{
			ll maxx=-1;
			rep(i,0,n) b[i]=(i+1)*(sum/n);
			rep(i,0,n)
			{
				maxx=max(maxx,abs(a[i]-b[i]));
			}
			cout<<maxx<<endl;
		}

	    cin>>n;
	}
	return 0;
}
