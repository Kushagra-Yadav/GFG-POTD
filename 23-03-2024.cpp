//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
      vector<int>r;
      r.push_back(0);
      r.push_back(1);
      if(n==1)return r;
      for(int i=2;i<=n;i++)
      {
          int a=r[i-1]%1000000007;
          int b=r[i-2]%1000000007;
          r.push_back((a+b)%1000000007);
      }
      return r;// Code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
