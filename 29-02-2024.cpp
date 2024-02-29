//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	   vector<long long int>v1(32,0);
	   vector<long long int>v0(32,0);
	   for(int i=0;i<n;i++)
	   {
	       int temp=arr[i];int y=1;
	       for(int j=0;j<32;j++)
	       {
	           if(temp&y)
	           {
	               v1[j]++;
	           }
	           else
	           {
	               v0[j]++;
	           }
	           y=y<<1;
	       }
	   }
	   long long int ans=0;
	   for(int i=0;i<32;i++)
	   {
	       ans+=(v1[i]*v0[i])*2;
	   }
	   return ans;// code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
