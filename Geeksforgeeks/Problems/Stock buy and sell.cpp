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
        ll n,p,q,i,j,k=0;
        cin>>n;
        ll a[n+5];
        rep(i,0,n)
        cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            j=1;
            if(a[i]<a[i+1])
            {
                p=i;j=0;i++;k=1;
            }
            while((a[i]<=a[i+1])&&(i<n-1))
            {
                i++;
                j=0;
            }
            q=i;
            if(j==0)
            cout<<"("<<p<<" "<<q<<")"<<" ";
        }
        if(k==0)
        {
            cout<<"No Profit";
        }
        cout<<endl;
    }
    
    return 0;
}
