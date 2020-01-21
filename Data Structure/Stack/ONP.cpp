#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
	long long int t,i,j,l;
	cin>>t;
	while(t--)
	{
		stack <int> st;
		string s;
		cin>>s;
		char a;
		l=s.length();
		for(i=0;i<l;i++)
		{
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
			{
				st.push(s[i]);
			}
			else if(s[i]==')')
			{
				a=st.top();
				cout<<a;
				st.pop();
			}
			else if(s[i]=='(')
			{
				continue;
			}
			else
			{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	
}
