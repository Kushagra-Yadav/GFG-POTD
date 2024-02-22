//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int helper(int i,string &s,int j,string &t,vector<vector<int>>&dp)
    {
        if(j==t.size())
        {
            return 1;
        }
        if(i==s.size())
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        long long ans=0;
        if(s[i]==t[j])
        {
           ans=(ans+helper(i+1,s,j+1,t,dp))%(1000000007);
        }
        
          ans=(ans+helper(i+1,s,j,t,dp))%(1000000007);
          return dp[i][j]=ans%(1000000007);
         
        
    }
    
    int subsequenceCount(string s, string t)
    {
      
      vector<vector<int>>dp(s.size(),vector<int>(t.size(),-1));
      return helper(0,s,0,t,dp);
       //Your code here
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends
