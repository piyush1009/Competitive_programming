int strstr(string s, string x)
{
     int s_len=s.size();
     int x_len=x.size();
     int i,j;
     for(i=0;i<s_len;i++)
     {
         int k=0;
         if(x[0]==s[i])
         {
             int l=0,count=0;
             for(j=i;j<i+x_len;j++)
             {
                 if(s[j]==x[l])
                 {
                     count++;
                 }
                 l++;
             }
             if(count==x_len)
             {
                 return i;
             }
         }
     }
     return -1;
}
