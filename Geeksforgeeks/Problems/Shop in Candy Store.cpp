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
        int n,k;
        cin>>n>>k;
        int a[n];
        rep(i,0,n)
        cin>>a[i];
        sort(a,a+n);
        int i=0,j=n;
        int minm=0,maxm=0;
        while(i<j)
        {
            minm+=a[i];
            i++;
            j=j-k;
        }
        i=0;j=n;
        while(i<j)
        {
            maxm+=a[j-1];
            j--;
            i=i+k;
        }
        cout<<minm<<" "<<maxm<<endl;
    }
    return 0;
}
