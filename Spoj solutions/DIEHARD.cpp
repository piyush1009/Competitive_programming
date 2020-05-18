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
	ll t;
	cin>>t;
	while(t--)
	{
		ll h,a;
		cin>>h>>a;
		h+=3;
		a+=2;
		ll sum=1;
		ll flag=1;
		while(1)
		{
			if(flag==0)
			{
				h+=3;a+=2;
				flag=1;
			}
			else if(h>5&&a>10)
			{
				h-=5;
				a-=10;
				flag=0;
			}
			else if(h>20)
			{
				h-=20;
				a+=5;
				flag=0;
			}
			else
			{
				break;
			}
			if(h<=0||a<=0) break;
			sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
