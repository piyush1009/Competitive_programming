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
    	int n,i;
    	cin>>n;
    	string a;
    	cin>>a;
    	n--;
    	while(n--)
    	{
    		string s,k="";
    		cin>>s;
    		for(i=0;i<min(a.size(),s.size());i++)
    		{
    			if(a[i]==s[i])
    			{
    				//what_is(i);
    				k=k+a[i];
				}
				else
				{
					break;
				}
			}
			a=k;
		}
		if(a!="")
		{
		    cout<<a<<endl;
		}
		else
		{
		    cout<<-1<<endl;
		}
	}   
    return 0;
}
