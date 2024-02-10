//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    long long help(int i,int j,int s,int n,int k, vector<vector<int>> &a,long long int dp[101][101][101])
    {
        if(i>=n || j>=n)
        return 0;
        if(i==n-1 && j==n-1)
        {
            if(s+a[i][j]==k)
            return dp[i][j][s]=1;
         return dp[i][j][s]=0;
        }
        if(s>k)
        return dp[i][j][s]=0;
        if(dp[i][j][s]!=-1)
        return dp[i][j][s];
        return dp[i][j][s]=(help(i+1,j,s+a[i][j],n,k,a,dp)+help(i,j+1,s+a[i][j],n,k,a,dp))%1000000007;
    }
    long long numberOfPath(int n, int k, vector<vector<int>> arr){
        long long int dp[101][101][101];
        memset(dp,-1,sizeof(dp));
        return help(0,0,0,n,k,arr,dp);// Code Here
    }
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends
