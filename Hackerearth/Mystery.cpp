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
        int i,n,sum=0;
	    cin>>n;
	    for(i=1;i<=sqrt(n);i++)
	    {
	        if(n%i==0)
	        {
	            sum++;
	        }
	    }
	    int k=(int)sqrt(n);
	    double kk=sqrt(n);
	    if(k!=kk)
	    cout<<sum*2<<endl;
	    else
	    cout<<sum*2-1<<endl;
    }
    
    
    return 0;
}
