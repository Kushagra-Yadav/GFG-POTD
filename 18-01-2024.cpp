//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int min_sprinklers(int g[], int n)
    {
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            if(g[i]==-1)
            v.push_back({1e7,1e7});
            else
            v.push_back({i-g[i],i+g[i]});
        }
        sort(v.begin(),v.end());
        int take=0;int index=0;int ans=0;
        while(take<n)
        {
            int nas=take-1;
            while(index<n && v[index].first<=take)
            {
                nas=max(nas,v[index++].second);
            }
            if(nas+1>take)
            {
                take=nas+1;
                ans++;
            }
            else 
            return -1;
        }
        return ans;// code here
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
        
        int gallery[n];
        for(int i=0; i<n; i++)
            cin>> gallery[i];
        Solution obj;
        cout<< obj.min_sprinklers(gallery,n) << endl;
    }
	return 1;
}

// } Driver Code Ends
