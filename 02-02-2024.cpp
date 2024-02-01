class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
       int n=s.size();
       int m=n-1;int ans=0;int i=0;
       if(s[0]=='-')
       {
           i++;m--;
       }
       for(;i<n;i++)
       {
           if(s[i]>='0' && s[i]<='9')
           ans+=(s[i]-'0')*pow(10,m);
           else
           return -1;
           m--;
        }
        return s[0]=='-'?-ans:ans;//Your code here
    }
};
