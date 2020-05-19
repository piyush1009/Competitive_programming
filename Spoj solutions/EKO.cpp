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

bool isValid(ll a[],ll n,ll k,ll mid)
{
	ll st=1;
	ll  sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>mid)
		sum=sum+(a[i]-mid);
		if(sum>=k){
			return true;
		}
    }
	return false;
}

ll b_sear(ll a[],ll n,ll k)
{
	ll l,h;
	l=0;
	h=a[n-1];
	ll finans=l;
	while(l<=h)
	{
		ll mid=(l+h)/2;
		if(isValid(a,n,k,mid)){
		    finans=mid;
			l=mid+1;
		}
		else{
			h=mid-1;
		}		
	}
	return finans;
}

int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n+5];
	rep(i,0,n) cin>>a[i];
	sort(a,a+n);
	cout<<b_sear(a,n,m);
	return 0;
}
