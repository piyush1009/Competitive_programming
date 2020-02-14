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
#define rep(i,a,b)  for(long long i=a;i<b;i++)
using namespace std;


ll merge_(ll a[],ll m,ll mid,ll n)
{
	ll i,j,k;
	ll n1=mid-m+1;
	ll n2=n-mid;
	ll l[n1+5],r[n2+5];
	rep(i,0,n1)
	l[i]=a[i+m];
	rep(j,0,n2)
	r[j]=a[mid+j+1];
	i=0;j=0;k=m;
	while(i<n1&&j<n2)
	{
		if(l[i]<=r[j])
		{
			a[k]=l[i];
			i++;k++;
		}
		else
		{
			a[k]=r[i];
			j++;k++;
		}
	}
	while(i<n1)
	{
		a[k]=l[i];
		i++;k++;
	}
	while(j<n2)
	{
		a[k]=r[j];
		j++;k++;
	}
}

ll mergesort(ll a[],ll m,ll n)
{
	if(m<n)
	{
		ll mid=(m+n)/2;
	    mergesort(a,m,mid);
	    mergesort(a,mid+1,n);
	    merge_(a,m,mid,n);
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        rep(i,0,n)
        cin>>a[i];
        mergesort(a,0,n);
        rep(i,0,n)
        cout<<a[i]<<" ";
    }
    return 0;
}
