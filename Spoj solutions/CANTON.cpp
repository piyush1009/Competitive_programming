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

ll solve()
{
	ll n,i=1,j=1,k=1;
	cin>>n;
	while(k<n)
	{
		j++;k++;
		if(k==n)
		break;
		while(j>1&&k<n)
		{
			i++;j--;k++;
		}
		if(k==n)
		break;
		i++;
		k++;
		if(k==n)
		break;
		while(i>1&&k<n)
		{
			i--;j++;k++;
		}
	}
	cout<<"TERM "<<n<<" IS "<<i<<"/"<<j<<endl;
}
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    	solve();
	}
    return 0;
}
