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
    ll n,k,i;
    cin>>n;
    ll a[n+5];
    rep(i,0,n)
    cin>>a[i];
    cin>>k;
    deque<ll> d(k);
    for(i=0;i<k;i++)
    {
    	while(!d.empty()&&a[i]>a[d.back()])
    	{
    		d.pop_back();
		}
		d.push_back(i);
	}
    for(;i<n;i++)
    {
    	cout<<a[d.front()]<<" ";
    	while(!d.empty()&&d.front()<=i-k)
    	{
    		d.pop_front();
		}
		while(!d.empty()&&a[i]>=a[d.back()])
    	{
    		d.pop_back();
		}
		d.push_back(i);
	}
	cout<<a[d.front()];
    return 0;
}
