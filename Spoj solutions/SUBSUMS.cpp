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

ll solve(ll st,ll n,ll a[],vector<int> &v)
{
	ll count=0;
	for(ll x=0;x<pow(2,n);x++)
	{
		ll sum=0;
		for (ll k=0;k<n;k++)
		{
			if(x&(1<<k))
			{
				sum=sum+a[st+k];
			}
		}
		v.pb(sum);
	}
}

int main()
{
	ll n,p,q,sum=0;
	cin>>n>>p>>q;
	ll a[n+5];
	vector<int> left,right;
	vector<int>::iterator low,high;
	rep(i,0,n) cin>>a[i];
	solve(0,n/2,a,left);
	solve(n/2,(n&1)?n/2+1:n/2,a,right);
	sort(right.begin(),right.end());
	for(ll i=0;i<left.size();i++)
	{
		low=lower_bound(right.begin(),right.end(),p-left[i]);
	    high=upper_bound(right.begin(),right.end(),q-left[i]);
	    sum+=high-low;
	}
	cout<<sum<<endl;
	return 0;
}
