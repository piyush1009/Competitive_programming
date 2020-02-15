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
        ll m,n;
        cin>>m>>n;
        ll a[m+5],b[n+5];
        rep(i,0,m)
        cin>>a[i];
        rep(j,0,n)
        cin>>b[j];
        ll i=0,j=0;
        while(i<m&&j<n)
        {
            if(a[i]<=b[j])
            {
                cout<<a[i]<<" ";
                i++;
            }
            else
            {
                cout<<b[j]<<" ";
                j++;
            }
        }
        while(i<m)
        {
            cout<<a[i]<<" ";
            i++;
        }
        while(j<n)
        {
            cout<<b[j]<<" ";
            j++;
        }
        cout<<endl;
    }
    return 0;
}
