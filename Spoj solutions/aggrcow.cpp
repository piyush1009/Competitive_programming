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
    	ll n,c,ans;
    	cin>>n>>c;
    	ll a[n+5];
    	rep(i,0,n) cin>>a[i];
    	sort(a,a+n);
    	ll low=0;
    	ll high=a[n-1]-a[0];
    	ll mid;
    	while(low<=high)
    	{
    		//cout<<low<<" "<<high<<endl;
    		mid=(low+high)/2;
    		ll j=0,sum=1;
    		rep(i,1,n)
    		{
    			//cout<<i<<j<<" ";
    			if(a[i]-a[j]>=mid)
    			{
    				sum++;
    				j=i;
				}
		    }
			//cout<<"sum"<<sum<<" "<<mid<<endl;;
			if(sum>=c)
			{
				ans=mid;
				low=mid+1;
			}
			else
			{
				high=mid-1;
			}
			//cout<<low<<" "<<high<<endl;
		}
		cout<<ans<<endl;
	}
    return 0;
}
