#include <bits/stdc++.h>
 
#define ll          long long int
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
#define rep(i,a,b)  for(long long int i=a;i<b;i++)
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    t=1;
    while(t)
    {
    	ll n,i,sum=0,ans=0;
    	cin>>n;
    	if(n==0)
    	break;
    	ll a[n];
    	rep(i,0,n)
    	cin>>a[i];
    	rep(i,0,n)
    	{
    		sum+=a[i];
    		ans+=abs(sum);
		}
	cout<<ans<<endl;	
	}
    return 0;
}
