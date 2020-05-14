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
	while(n)
	{
		ll a[n];
		rep(i,0,n) cin>>a[i];
		sort(a,a+n);
		vector<int> v(a,a+n);
		sort(v.begin(),v.end());
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				vector<int>::iterator upper;
				upper=upper_bound(v.begin(),v.end(),a[i]+a[j]);
				sum=sum+n-(upper-v.begin());
			}
		}
		cout<<sum<<endl;
		cin>>n;
	}
	return 0;
}
