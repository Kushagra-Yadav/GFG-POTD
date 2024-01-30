//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int help(int i,int j,int k,string &a,string &b,string &c,int dp[21][21][21])
        {
            if(i==a.size() || j==b.size() || k==c.size())
            return 0;
            if(dp[i][j][k]!=-1)return dp[i][j][k];
            if(a[i]==b[j] && b[j]==c[k])
            {
                return dp[i][j][k]=1+help(i+1,j+1,k+1,a,b,c,dp);
            }
            int f=0;int s=0;int t=0;
            f=help(i+1,j,k,a,b,c,dp);
            s=help(i,j+1,k,a,b,c,dp);
            t=help(i,j,k+1,a,b,c,dp);
            return dp[i][j][k]=max(f,max(s,t));
        }
        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            int dp[21][21][21];
            memset(dp,-1,sizeof(dp));
           return help(0,0,0,A,B,C,dp); // your code here
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
