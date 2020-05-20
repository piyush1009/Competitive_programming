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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[100000];
		rep(i,0,n)  cin>>a[i];
		sort(a,a+n);
		int i=0;
		while(a[i]==1)
		{
			cout<<1<<" ";
			i++;
		}
		if(i==n-2)
		{
			if(a[i]==2)
			{
				if(a[i+1]==3)
				{
					cout<<2<<" "<<3<<endl;
					continue;
				}
			}
		}
		i=0;
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]!=1)
			{
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}
