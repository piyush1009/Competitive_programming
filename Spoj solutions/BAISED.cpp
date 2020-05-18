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

bool sortbysec(const pair<string,ll> &a,const pair<string,ll> &b)
{
	return (a.second<b.second);
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<pair<string,ll> > vect;
		rep(i,0,n)
		{
			string s;
			ll k;
			cin>>s>>k;
			vect.pb(make_pair(s,k));
		}
		sort(vect.begin(),vect.end(),sortbysec);
		ll sum=0;
		for(ll i=1;i<=n;i++)
		{
			sum+=abs(i-vect[i-1].second);
		}
		cout<<sum<<endl;
	}
	return 0;
}
