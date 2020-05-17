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

int main()
{
	while(1)
	{
		ll n,m;
		cin>>n;
		if(n==0) break;
		ll a[n+5];
		rep(i,0,n) cin>>a[i];
		cin>>m;
		ll b[m+5];
		rep(i,0,m) cin>>b[i];
		ll i=0,j=0;
		ll sum1=0,sum2=0,sum=0;
		while(i<n&&j<m)
		{
			if(a[i]<b[j])
			{
				sum1+=a[i];
				i++;
			}
			else if(a[i]>b[j])
			{
				sum2+=b[j];
				j++;
			}
			else
			{
				sum+=max(sum1,sum2)+a[i];
				sum1=0;
				sum2=0;
				ll temp1=a[i];
				ll temp2=b[j];
				i++;
				j++;
				while(temp1==a[i]&&i<n)
				{
					sum+=a[i];
					i++;
				}
				while(temp2==b[j]&&j<m)
				{
					sum+=b[j];
					j++;
				}
			}
		}
		while(i<n)
		{
			sum1+=a[i];
			i++;
		}
		while(j<m)
		{
			sum2+=b[j];
			j++;
		}
		sum+=max(sum1,sum2);
		cout<<sum<<endl;
	}
	return 0;
}
