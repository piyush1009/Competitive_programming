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
    ll n,m,sum=0,maxx=0,j=0,i=0;
    cin>>n>>m;
    ll a[n+5];
    rep(i,0,n)
    cin>>a[i];
    i=0;
    while(i<n)
    {
//    	cout<<sum<<endl;
    	if(sum>m)
    	{
//    		cout<<maxx;
    		sum=sum-a[j];
    		j++;
		}
		else
		{
			maxx=max(maxx,sum);
			sum=sum+a[i];
			i++;
		}
//		cout<<sum<<endl;
	}
	while(sum>m)
	{
		sum=sum-a[j];
		j++;
	}
	maxx=max(maxx,sum);
	cout<<maxx;
    return 0;
}
