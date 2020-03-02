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
        string a,b;
        cin>>a>>b;
        int aa[26]={0};
        rep(i,0,a.size())
        {
            aa[a[i]-'a']++;
        }
        rep(i,0,b.size())
        {
            aa[b[i]-'a']--;
        }
        ll temp=0;
        rep(i,0,26)
        {
            if(aa[i]==0)
            {
                temp=1;
            }
            else
            {
                temp=0;
                break;
            }
        }
        if(temp==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
