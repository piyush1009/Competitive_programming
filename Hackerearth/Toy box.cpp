#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 

int main() {
	int n,m;
	cin>>n>>m;
	vector <pair<int,int> > v;
	for(int i=0;i<n;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    v.push_back(make_pair(a,b));
	}
	sort(v.begin(), v.end(), sortbysec);
    int sum=0;
    int a[m+1]={0};
    for(int i=0;i<n;i++)
    {
        a[v[i].second]=max(a[v[i].second],v[i].first);
        //cout<<sum<<endl;
    }
    for(int i=0;i<m+1;i++)
    {
        // cout<<a[i]<<" ";
        sum+=a[i];
    }
    cout<<sum<<endl;
} 
