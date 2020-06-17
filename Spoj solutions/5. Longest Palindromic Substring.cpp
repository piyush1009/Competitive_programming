int dp[1001][1001]={-1};

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int dp[1001][1001];
        memset(dp,0,sizeof(dp));
        string sol="";
        if(n==0) return "";
        int ans=1;
        for(int i=0;i<n;i++)
        {
            dp[i][i]=true;
        }
        int start=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=true;
                start=i;
                ans=2;
            }
        }
        for(int k=3;k<=n;k++)
        {
        for(int i=0;i<n-k+1;++i) 
        {
            int j=i+k-1;
            if(dp[i+1][j-1]&&s[i]==s[j])
            {
                dp[i][j] = true;
                if(k>ans)
                {
                    start=i;
                    ans=k;
                }
            }
        }
        }
        for( int i = start; i <= start+ans-1; ++i ) 
        sol=sol+ s[i];
        return sol;
    }
};
