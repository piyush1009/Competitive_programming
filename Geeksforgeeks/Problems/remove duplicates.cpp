#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        char s[1000];
        int a[256]={0};
        cin.getline(s,1000);
        // cout<<s;
        int i;
        for(i=0;i<256;i++)
        {
            a[i]=0;
        }
        //cout<<strlen(s);
        for(i=0;i<strlen(s);i++)
        {
            // cout<<a[(int)s[i]]<<" ";
            if(a[(int)s[i]]==0)
            {
                //cout<<a[(int)s[i]]<<" ";
                a[s[i]]++;
                cout<<s[i];
            }
        }
        cout<<endl;
    }   
    return 0;
}
