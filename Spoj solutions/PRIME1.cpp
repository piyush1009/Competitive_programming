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
    	int l,r,i,j;
        cin>>l>>r;
        bool isPrime[r-l+1];
        memset(isPrime,true,sizeof(isPrime));
        for(i=2;i*i<=r;i++)
        {
        	for(j=max(i*i,(l+(i-1))/i*i);j<=r;j+=i)
        	{
        		isPrime[j-1]=false;
			}
		}
        for(i=max(l,2);i<=r;i++)
        {
        	if(isPrime[i-1])
        	{
        		cout<<i<<endl;
			}
		}
		cout<<endl;
	}
    return 0;
}
