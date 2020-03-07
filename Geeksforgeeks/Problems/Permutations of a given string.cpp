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

vector<string> v;

permut(string a,int l,int r)
{
	if(l==r)
	{
//		cout<<a<<" ";
		v.push_back(a);
	}
	else
	{
		for(int i=l;i<=r;i++)
	    {    
		    swap(a[l],a[i]);
		    permut(a,l+1,r);
		    swap(a[l],a[i]);
	    }
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
        string s;
        v={};
        vector<string>::iterator it;
        cin>>s;
        int n=s.size();
        sort(s.begin(),s.end());
        permut(s,0,n-1);
        sort(v.begin(),v.end());
        for(it=v.begin();it!=v.end();it++)
        {
        	cout<<*it<<" ";
		}
        cout<<endl;
    }
    
    return 0;
}
