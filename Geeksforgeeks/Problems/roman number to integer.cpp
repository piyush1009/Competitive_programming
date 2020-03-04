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
        string s;
        map<char,int> mymap;
        mymap['I']=1;
        mymap['V']=5;
        mymap['X']=10;
        mymap['L']=50;
        mymap['C']=100;
        mymap['D']=500;
        mymap['M']=1000;
        cin>>s;
        int sum=0,i;
        for(i=0;i<s.size();i++)
        {
        	int k=0;
            //c,d,m,x,i,v
            if(mymap[s[i]]<mymap[s[i+1]])
            {
            	sum=sum+mymap[s[i+1]]-mymap[s[i]];
            	i++;
			}
			else
			{
				sum+=mymap[s[i]];
			}
        }
        cout<<sum<<endl;
    }
    
    
    return 0;
}
