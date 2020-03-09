#include <bits/stdc++.h>
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
        int a[256]={0};
        cin>>s;
        int sum=0,max=0,i;
        for(i=0;i<s.size();i++)
        {
//             cout<<a[(int)s[i]]<<" ";
            if(a[(int)s[i]]==0)
            {
                // cout<<a[(int)s[i]]<<" ";
                a[(int)s[i]]++;
                sum+=1;
            }
            else
            {
//                cout<<"sum"<<sum<<endl;
                for(int j=0;j<256;j++)
                {
                	a[j]=0;
				}
                if(max<sum)
                max=sum;
                sum=0;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
