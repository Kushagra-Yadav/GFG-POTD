//Sequence of sequences


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int help(int ind,int val,int m,int n, vector<vector<int>>&dp)
    {
        if(ind==n)return 1;
        if(val>m)return 0;
        if(dp[ind][val]!=-1)return dp[ind][val];
        int pick=help(ind+1,2*val,m,n,dp);
        int not_pick=help(ind,val+1,m,n,dp);
        return dp[ind][val]=(pick+not_pick);
    }
    int numberSequence(int m, int n){
      vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
      return help(0,1,m,n,dp);  // code here
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
