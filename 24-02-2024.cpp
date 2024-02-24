//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
     int help(int n,vector<int>&dp)
     {
         if(n<=4)
         {
             return dp[n]=n;
         }
         if(dp[n]!=-1)
         return dp[n];
         return dp[n]=max(n,help(n/2,dp)+help(n/3,dp)+help(n/4,dp));
         
     }
        int maxSum(int n)
        {
           vector<int>dp(n+1,-1);
           return help(n,dp);//code here.
        }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
