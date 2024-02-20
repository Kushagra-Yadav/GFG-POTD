//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    bool help(string &a,int i,set<string>&s)
    {
        if(i==a.size())
        return true;
        for(int k=1;k<=a.size()-i;k++)
        {
            if(s.find(a.substr(i,k))!=s.end())
            {
                if(help(a,i+k,s))
                return true;
            }
        }
        return false;
    }
    int wordBreak(string A, vector<string> &B) {
        set<string>s;
        for(auto x:B)
        s.insert(x);
       return help(A,0,s); //code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends
