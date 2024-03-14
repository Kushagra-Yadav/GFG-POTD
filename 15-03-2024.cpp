//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int largestSubsquare(int n, vector<vector<char>> a) {
       vector<vector<int>>lr(n,vector<int>(n,0));
        vector<vector<int>>tb(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            int s=0;
            for(int j=0;j<n;j++)
            {
               if(a[i][j]=='X')
               s++;
               else
               s=0;
               lr[i][j]=s;
            }
        }
         for(int i=0;i<n;i++)
        {
            int s=0;
            for(int j=0;j<n;j++)
            {
               if(a[j][i]=='X')
               s++;
               else
               s=0;
               tb[j][i]=s;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                   int t=min(lr[i][j],tb[i][j]);
                   while(t>0)
                   {
                    if((j-(t-1))>=0 && (i-(t-1))>=0 && tb[i][j-(t-1)]>=t && lr[i-(t-1)][j]>=t)
                        {
                            
                                ans=max(ans,t);
                                t=0;
                            
                           
                        }
                        else
                        t--;
                   }
                    
            }
        }
        return ans;
       // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<char>> a(n, vector<char>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cin >> a[i][j];
        }
        Solution ob;
        cout << ob.largestSubsquare(n, a) << "\n";
    }
}
// } Driver Code Ends
