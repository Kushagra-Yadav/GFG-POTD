//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void help(int i,vector<int> &a,vector<vector<int>>&res,int n,vector<int>&taken,vector<int>&temp,set<vector<int>>&s)
    {
        if(i==n)
        {
            if(s.find(temp)==s.end())
            {
                 res.push_back(temp);
                 s.insert(temp);
            }
           return ;
        }
        
        for(int j=0;j<n;j++)
        {
            if(!taken[j])
            {
                temp.push_back(a[j]);
                taken[j]=1;
                help(i+1,a,res,n,taken,temp,s);
                temp.pop_back();
                taken[j]=0;
            }
        }

    }
    
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>res;vector<int>taken(n,0);vector<int>temp;set<vector<int>>s;
     help(0,arr,res,n,taken,temp,s);
     return res;// code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
