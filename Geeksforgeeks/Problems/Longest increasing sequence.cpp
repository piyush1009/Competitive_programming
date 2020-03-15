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
        int n,i,j;
        cin>>n;
        int a[n];
        rep(i,0,n)
        cin>>a[i];
        int b[n];
        rep(i,0,n)
        b[i]=1;
        j=0;i=1;
        while(i<n)
        {
            while(i!=j)
            {
                if(a[j]<a[i])
                {
                    b[i]=max(b[i],b[j]+1);
                }
                j++;
            }
            j=0;i++;
        }
        int ans=-1;
        rep(i,0,n)
        {
            ans=max(ans,b[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
