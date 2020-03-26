#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct My{
	
stack <long long int> st;
long long int min;

void push(long long int k)
		{
			if(st.empty())
			{
				min=k;
				st.push(k);
				return;
		    }
			if(k>=min)
			{
				st.push(k);
			}
			else
			{
				st.push(2*k-min);
				min=k;
			}
		}
		void pop()
		{
			if(st.empty())
			{
				return;
		    }
			int y=st.top();
			st.pop();
			if(y>=min)
			{
				//min=min;
			}
			else
			{
				min=2*min-y;
			}
		}
		void mine()
		{
			if(st.empty())
			{
				return;
		    }
			cout<<min<<endl<<endl;
		}

};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	My ss;
	long long int t,k;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s=="PUSH")
		{
			cin>>k;
			ss.push(k);
		}
		if(s=="POP")
		{
			ss.pop();
		}
		if(s=="MIN")
		{
			ss.mine();
		}
	}
	return 0;
}
