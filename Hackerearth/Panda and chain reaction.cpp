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
    ll t,d;
    d=pow(10,6)+3;
    ll a[d+5];
    a[0]=1;
    for(ll i=1;i<=d;i++)
    {
        a[i]=(i*a[i-1])%d;
    }
    cin>>t;
    while(t--)
    {
        unsigned ll n,x,ans=1;
        cin>>n>>x;
        x=x%d;
        if(n>d)
        {
            n=d;
        }
        ans=(a[n]*x)%d;
        cout<<ans<<endl;
    }
    
    
    return 0;
}
