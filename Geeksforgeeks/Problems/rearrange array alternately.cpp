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
        ll a[n+5];
        rep(i,0,n)
        cin>>a[i];
        ll maxy=*max_element(a,a+n)+1;
        ll max=n-1,min=0;
        ll new_ele_max=a[max];
        ll new_ele_min=a[min];
        rep(i,0,n)
        {
            if(i%2==0)
            {
                a[i]=a[i]+maxy*(new_ele_max%maxy);
                max--;
                new_ele_max=a[max];
            }
            else
            {
                a[i]=a[i]+maxy*(new_ele_min%maxy);
                min++;
                new_ele_min=a[min];
            }
        }
        rep(i,0,n)
        {
            cout<<a[i]/maxy<<" ";
        }
        cout<<endl;
    }
    return 0;
}
