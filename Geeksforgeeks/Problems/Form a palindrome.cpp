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
        string s;
        cin>>s;
        int n=s.size();
        int a[n+5][n+5];
        memset(a, 0, sizeof(a));
        int sum=0,diff,l,h;
        for(diff=1;diff<n;diff++)
        {
        	for(l=0,h=diff;h<n;l++,h++)
        	{
        		if(s[l]==s[h])
        		{
        			a[l][h]=a[l+1][h-1];
				}
				else
				{
					a[l][h]=min(a[l+1][h],a[l][h-1])+1;
				}
			}
		}
		cout<<a[0][n-1]<<endl;
    }
    
    return 0;
}
