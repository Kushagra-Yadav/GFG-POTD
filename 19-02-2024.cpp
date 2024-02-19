//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
       vector<int>v(26,0);
       for(int i=0;i<s.size();i++)
       {
           v[s[i]-'a']++;
       }
       priority_queue<int,vector<int>>pq;
       for(int i=0;i<v.size();i++)
        {
            if(v[i]!=0)
            pq.push(v[i]);
        }
        for(int i=1;i<k;i++)
        {
            int val=pq.top();
            pq.pop();
            if(val-1)
            pq.push(val-1);
        }
        int ans=0;
        while(!pq.empty())
        {
            ans+=pow(pq.top(),2);
            pq.pop();
        }
        return ans;// code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
