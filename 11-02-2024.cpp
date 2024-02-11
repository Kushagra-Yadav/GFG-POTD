//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        unordered_set<int>s;
        vector<int>v;
        v.push_back(0);s.insert(0);
        for(int i=1;i<=n-1;i++)
        {
            if(v.back()>i && s.find(v.back()-i)==s.end())
            {
                v.push_back(v.back()-i);
                
            }
            else
            {
               v.push_back(v.back()+i);
               
            }
            s.insert(v.back());
        }
        return v ;// code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
