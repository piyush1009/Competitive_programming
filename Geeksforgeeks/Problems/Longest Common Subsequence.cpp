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
    	int l_a,l_b;
    	cin>>l_a>>l_b;
        string a,b;
        cin>>a>>b;
        int table[l_b+5][l_a+5];
        rep(i,0,l_b+1)
        table[i][0]=0;
        rep(i,0,l_a+1)
        table[0][i]=0;
        rep(i,1,l_b+1)
        {
        	rep(j,1,l_a+1)
        	{
        		if(a[j-1]==b[i-1])
				{
					table[i][j]=table[i-1][j-1]+1;
				}
				else
				{
				    table[i][j]=max(table[i-1][j],table[i][j-1]);
				}
			}
		}
//        rep(i,0,l_b+1)
//        {
//        	rep(j,0,l_a+1)
//        	{
//        		cout<<table[i][j]<<" ";
//			}
//			cout<<endl;
//		}
        cout<<table[l_b][l_a]<<endl;
    }
    
    return 0;
}
