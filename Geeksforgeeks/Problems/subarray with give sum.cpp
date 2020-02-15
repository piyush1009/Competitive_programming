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
        ll n,s;
        cin>>n>>s;
        ll a[n+5];
        rep(i,0,n)
        cin>>a[i];
        ll i=0,j=1;
        ll aa=0;
        ll k=a[i]+a[j];
        while(i<n&&j<n)
        {
            if(k==s)
            {
                aa=1;
                cout<<i+1<<" "<<j+1;break;
                k=k-a[i];
                i++;
            }
            else if(k<s)
            {
                j++;
                k=k+a[j];
            }
            else
            {
                k=k-a[i];
                i++;
            }
        }
//        cout<<aa;
        if(aa==0)
        {
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}
