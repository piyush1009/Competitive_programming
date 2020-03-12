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
        int m,n,k;
        cin>>n>>m>>k;
        int a[n],b[m];
        rep(i,0,n)
        cin>>a[i];
        rep(j,0,m)
        cin>>b[j];
        int i=0,j=0,kk=0,c[m+n];
        while(i<n&&j<m)
        {
            if(a[i]<=b[j])
            {
                c[kk]=a[i];
                kk++;
                i++;

            }
            else
            {
                c[kk]=b[j];
                kk++;
                j++;
            }
            // if(kk+1==k)
            // {
            //     cout<<c[kk]<<endl;
            //     break;
            // }
        }
        while(i<n)
        {
            c[kk]=a[i];
            kk++;
            i++;
            // if(kk+1==k)
            // {
            //     cout<<c[kk]<<endl;
            //     break;
            // }
        }
        while(j<m)
        {
            c[kk]=b[j];
            kk++;
            j++;
            // if(kk+1==k)
            // {
            //     cout<<c[kk]<<endl;
            //     break;
            // }
        }
        cout<<c[k-1]<<endl;
    }
    return 0;
}
