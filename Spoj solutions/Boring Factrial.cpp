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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,p,i;
    	scanf("%lld%lld",&n,&p);
    	if(n>=p)
    	{
    		printf("0\n");
    		continue;
		}
    	ll ans;
    	ans=-1;
    	for(i=n+1;i<p;i++)
    	{
    		ll a=i;
			ll b=p-2;
			ll m=p;
			ll x=1,y=a;
            while(b>0)
            {
            if(b & 1)
                x=(x*y)%m;
            y=(y*y)%m;
            b>>=1;
            }
    		ll temp=x;
            ans=(ans*temp)%p;
			//what_is(n);
			n++;
		}
		printf("%lld\n",p+ans);
	}
    return 0;
}
