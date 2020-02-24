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
        ll n,i,j;
        cin>>n;
        ll a[n+5];
        rep(i,0,n)
        cin>>a[i];
        ll sum1=0,sum2=0;
        i=0;j=n-1;
        ll co=0;
        while(i<=j)
        {
            if(sum1==sum2)
            {
                if(i==j)
                {
                	cout<<i+1<<endl;
                	co=1;
                    break;
				}
            }
            if(sum1<=sum2)
            {
                sum1+=a[i];
                i++;
            }
            else
            {
                sum2+=a[j];
                j--;
            }
        }
        if(co==0)
        {
            cout<<-1<<endl;
        }
    }   
    return 0;
}
