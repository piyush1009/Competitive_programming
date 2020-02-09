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
    int t;
    cin>>t;
    while(t--)
    {
        ll n,p,q,i,j,sum=0,max_so_far=0,max_so_ending=0;
        cin>>n;
        ll a[n+5];
        rep(i,0,n)
        cin>>a[i];
        ll k=0;
        rep(i,0,n)
        {
        if(a[i]<0)
        k++;
        }
        if(k!=n)
        {
        rep(i,0,n)
        {
            max_so_ending=max_so_ending+a[i];
            if(max_so_ending<0)
            max_so_ending=0;
            else if(max_so_far<max_so_ending)
            max_so_far=max_so_ending;
        }
        cout<<max_so_far<<endl;
        }
        else
        {
            cout<<*max_element(a,a+n)<<endl;
        }
    }
    return 0;
}
