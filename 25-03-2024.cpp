//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
     bool check(string &s)
     {
         int pre1=0;int pre0=0;
         int i=0;
         while(i<s.size())
         {
             if(s[i]=='1')
             pre1++;
             else
             pre0++;
             if(pre1<pre0)
             return false;
             i++;
         }
         return true;
     }
     void rec(int i,int n,string s,vector<string>&r)
     {
         if(i==n)
         {
             if(check(s))
             {
                 r.push_back(s);
             }
             return;
         }
         rec(i+1,n,s+'1',r);
         rec(i+1,n,s+'0',r);
         
     }
	vector<string> NBitBinary(int n)
	{
	    int i=0,c=0;string s="";vector<string>r;
	  rec(i,n,s,r);
	  return r;// Your code goes here
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends
