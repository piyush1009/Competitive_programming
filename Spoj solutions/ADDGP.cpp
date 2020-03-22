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
    ll n,r,q,i;
    cin>>n>>r>>q;
    ll a[n+5];
    for(i=1;i<=n;i++)
    {
    	a[i]=0;
	}
	while(q--)
	{
		ll j,k,l,m;
//		cin>>j>>k;
        scanf("%lld %lld",&j,&k);
		if(j==0)
		{
//			cin>>l>>m;
			scanf("%lld %lld",&l,&m);
			ll s=1;
			for(i=l;i<=m;i++)
			{
				a[i]+=(k*s)%hell;
				s=(s*r)%hell;
			}
		}
		else if(j==1)
		{
//			cin>>l;
			scanf("%lld",&l);
			ll sum=0;
			for(i=k;i<=l;i++)
			{
				sum=(sum+a[i]%hell)%hell;
			}
			printf("%lld\n",sum);
		}
		else
		{
			a[k]=0;
		}
	}
    return 0;
}
