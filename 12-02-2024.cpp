//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
       long long int ans=0;
       long long int val=1;
       for(int i=1;i<=n;i++)
       {
           long long temp=1;
           for(int j=1;j<=i;j++)
          {
              temp=(temp*val)%1000000007;
               val=(val+1)%1000000007;
          }
          ans=(ans+temp)%1000000007;
       }
       return ans;
       // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends
