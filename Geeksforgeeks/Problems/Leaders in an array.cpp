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
        ll i;
        ll a[n+5],b[n+5];
        rep(i,0,n)
        cin>>a[i];
        ll max=0;
        vi v;
        ll j=0;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]>=max)
            {
                b[j]=a[i];
                j++;
                max=a[i];
            }
        }
        for(i=j-1;i>=0;i--)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
