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
        ll m,n,i,j;
        cin>>m>>n;
        n=1000000/m;
        ll a[n-m+1]={1};
        for(i=2;i*i<=n;i++)
        {
        	for(j=max(i*i,(m+(i-1))/i*i);j<=n;j+=i)
        	{
        		a[j]=0;
			}
		}
		ll sum=0;
		for(i=max(m,(long long int)2);i<=n;i++)
		{
			sum=sum+a[i];
		}
		cout<<sum<<endl;
    }
    
    
    return 0;
}
