//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
     for(int i=1;i<=r;i++)
     {
         string temp="";
         for(auto ch :s)
         {
             if(ch=='0')
             temp+="01";
             else
             temp+="10";
             if(temp.size()>n)
             break;
         }
         s=temp;
     }
     return s[n];//code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends
