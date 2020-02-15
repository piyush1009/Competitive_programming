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
        int m,n;
        cin>>m>>n;
        int a[m+5][n+5],p[m+5],q[n+5];
        rep(i,0,m)
        {
            rep(j,0,n)
            {
                cin>>a[i][j];
            }
        }
        rep(i,0,m)
        {
            ll s=0;
            rep(j,0,n)
            {
                if(a[i][j]==1)
                {
                    s=1;break;
                }
            }
            p[i]=s;//cout<<p[i]<<" ";
        }
        rep(i,0,n)
        {
            ll s=0;
            rep(j,0,m)
            {
                if(a[j][i]==1)
                {
                    s=1;break;
                }
            }
            q[i]=s;//cout<<q[i]<<" ";
        }
        rep(i,0,m)
        {
            rep(j,0,n)
            {
                if(p[i]==0&&q[j]==0)
                {
                    cout<<0<<" ";
                }
                else
                {
                    cout<<1<<" ";
                }
            }
            cout<<endl;
        }
    }
    
    
    return 0;
}
