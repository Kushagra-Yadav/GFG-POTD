//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
bool valid(int i,int j,vector<vector<int>> &mat)
{
    if(i<0 || i>=mat.size() || j<0 || j>=mat[0].size())
    return false;
    return true;
}
  void help(vector<vector<int>> &mat,int i,int j,int s,int &g_s,vector<vector<int>>&vis)
      {
          if(j==mat[0].size()-1)
          {
              if(mat[i][j]==1)
              g_s=min(g_s,s+1);
              return;
          }
          
          if(mat[i][j]==1)
          {
              vis[i][j]=true;
              if(valid(i+1,j,mat) && !vis[i+1][j])
              {
                  help(mat,i+1,j,1+s,g_s,vis);
              }
              
              if(valid(i-1,j,mat) && !vis[i-1][j])
              {
                  help(mat,i-1,j,1+s,g_s,vis);
              }
              
              if(valid(i,j+1,mat) && !vis[i][j+1])
              {
                  help(mat,i,j+1,1+s,g_s,vis);
              }
              
              if(valid(i,j-1,mat) && !vis[i][j-1])
              {
                  help(mat,i,j-1,1+s,g_s,vis);
              }
              vis[i][j]=false;
          }
          
  }
    int findShortestPath(vector<vector<int>> &mat)
    {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                    if(valid(i+1,j,mat))
                    mat[i+1][j]=-1;
                    if(valid(i-1,j,mat))
                    mat[i-1][j]=-1;
                    if(valid(i,j+1,mat))
                    mat[i][j+1]=-1;
                    if(valid(i,j-1,mat))
                    mat[i][j-1]=-1;
                }
            }
        }
      int ans=INT_MAX;
      vector<vector<int>>vis(mat.size(),vector<int>(mat[0].size(),false));
      for(int i=0;i<mat.size();i++)
      {
           int global_s=INT_MAX;
           help(mat,i,0,0,global_s,vis);
          ans=min(ans,global_s);
          
          
      }
      return ans==INT_MAX?-1:ans;// code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R, C;
        cin >> R >> C;
        vector<vector<int>> mat(R, vector<int>(C));
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> mat[i][j];
            }
        }

        Solution ob;
        int ans = ob.findShortestPath(mat);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
