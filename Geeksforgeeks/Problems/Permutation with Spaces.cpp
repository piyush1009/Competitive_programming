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

void solve(string ip,string op)
{
    if(ip==""){
        cout<<"("<<op<<")";
        return;
    }
    string op1=op;
    string op2=op;
    op1=op1+" "+ip[0];
    op2=op2+ip[0];
    ip.erase(ip.begin());
    solve(ip,op1);
    solve(ip,op2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    string ip;
    cin>>ip;
    string op="";
    op.pb(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op);
    cout<<endl;
    }
    return 0;
}
