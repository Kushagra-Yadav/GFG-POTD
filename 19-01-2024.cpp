//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
    vector<vector<int>>res;unordered_map<int,int>m;vector<pair<int,int>>v;
    for(int i=0;i<N;i++)
    {
        m[arr[i]]++;
        int c=0;
        for(auto it=v.begin();it!=v.end();it++)
        {
            if(it->first==arr[i] && it->second==m[arr[i]]-1)
            {
                c=1;
                it->second=m[arr[i]];
            }
        }
        if(c==0)
        v.push_back({arr[i],m[arr[i]]});
        sort(v.begin(),v.end(),[&](const pair<int,int>&a,const pair<int,int>&b){
            if(a.second!=b.second)
            return a.second>b.second;
            return a.first<b.first;
        });
        int x=min(K,(int)v.size());
        vector<int>temp;
        for(int i=0;i<x;i++)
        temp.push_back(v[i].first);
        res.push_back(temp);
    }
    return res;
    // code here
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> a(N);
        Array::input(a,N);
        
        Solution obj;
        vector<vector<int>> res = obj.kTop(a, N, K);
        
        for(auto it:res)
            Array::print(it);
        
    }
}

// } Driver Code Ends
