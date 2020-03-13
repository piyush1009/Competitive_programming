#include <bits/stdc++.h>
#include<string>
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
        int n,s;
        cin>>n>>s;
        int i,sum=0;
        string str="";
        if((s==0&&n>1) || 9*n<s)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
        	if(s>=9)
        	{
                str=str+'9';
			    s=s-9;        		
			}
			else if(s>=0)
			{
				string yo=to_string(s);
				str=str+yo;
				s=0;
			}
			else
			{
				str=str+'0';
			}
            }
            cout<<str<<endl;
        }
    }
    return 0;
}
