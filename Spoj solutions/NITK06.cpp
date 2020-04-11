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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll a[n+5];
    	rep(i,0,n) cin>>a[i];
    	rep(i,0,n-1){
    		ll sub=min(a[i],a[i+1]);
    		a[i]=a[i]-sub;
    		a[i+1]=a[i+1]-sub;
		}
		ll k=0;
		rep(i,0,n)
		{
			if(a[i]==0)
			k++;
		}
		if(k==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
    return 0;
}
