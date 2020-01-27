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
    int k=2;
    while(k--)
    {
    	string p;
        cin>>p;
        ll i,j,k,carry=0,diff=0,l,x,y;
		double sum,sum1;
        ll a[105]={0},b[105]={0},aa[105]={0};
        
        for(i=0;i<p.length();i++)
        {
        	a[i]=p[i]-48;//cout<<a[i];
		}
		k=0;//cout<<endl;
		//cout<<p.length()<<endl;;
		for(i=p.length()-1;i>=0;i--)
        {
        	aa[k]=(a[i]*2)%10+carry;
        	carry=(a[i]*2)/10;
        	//cout<<aa[k]<<" "<<carry<<endl;
        	k++;
		}
		aa[k]=carry;
		for(i=0;i<k;i++)
		{
			cout<<aa[i];
		}
		cout<<endl;
	}   
    return 0;
}
