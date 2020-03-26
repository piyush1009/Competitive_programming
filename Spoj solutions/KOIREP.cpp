#include <bits/stdc++.h>
 
#define ll          int
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
#define inf 0x3f3f3f3f
#define hell        1000000007
#define what_is(x)  cerr << #x << " is " << x << endl;
#define rep(i,a,b)  for(long long int i=a;i<b;i++)
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,m;
	cin>>n>>m;
	vii b;
	ll a[n+5][m+5];
	rep(i,0,n)
	{
		rep(j,0,m)
		{
			cin>>a[i][j];
			b.pb(make_pair(a[i][j],i+1));
		}
	}
	sort(b.begin(),b.end());
	ll  count[n+5]={0},check=0,diff=inf,l,r;
	l=r=0;
	check=1;
	count[b[0].S]++;
	while(r<n*m&&l<n*m)
	{
		if(check==n)
		{
			diff=min(diff,b[r].F-b[l].F);
			count[b[l].S]--;
			if(!count[b[l].S]) check--;
			l++;
		}
		else
		{
			r++;
			if(r==m*n) break;
			count[b[r].S]++;
			if(count[b[r].S]==1) check++;
		}
	}
	cout<<diff;
    return 0;
}
