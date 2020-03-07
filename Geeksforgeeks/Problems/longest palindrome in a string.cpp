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
        rep(i,0,n)
        {
        	a[i][i]=1;
		}
		int st=0,maxlength=1;
		rep(i,0,n-1)
		{
			if(s[i]==s[i+1])
			{
				a[i][i+1]=1;
				st=i;
				maxlength=2;
			}
		}
		for(int k=3;k<=n;k++)
		{
			for(int i=0;i<n-k+1;i++)
			{
				int j=k+i-1;
				if(a[i+1][j-1] &&s[i]==s[j])
				{
					a[i][j]=1;
					if(k>maxlength)
					{
						maxlength=k;
						st=i;
					}
				}
			}
		}
		for(int i=st;i<st+maxlength;i++)
		{
			cout<<s[i];
		}
		cout<<endl;
    }
    
    return 0;
}
