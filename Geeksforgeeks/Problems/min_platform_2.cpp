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
        ll n,i=1,j=0;
        cin>>n;
        ll a[n+5],d[n+5];
        rep(i,0,n)
        cin>>a[i];
        rep(i,0,n)
        cin>>d[i];
        sort(a,a+n);
        sort(d,d+n);
        ll m=1,max=1;
        while(i<n&&j<n)
        {
        	if(a[i]<=d[j])
        	{
        		m++;
        		i++;
        		if(m>max)
        		max=m;
			}
			else
			{
				m--;j++;
			}
		}
        cout<<max<<endl;;
    }
    
    return 0;
}
