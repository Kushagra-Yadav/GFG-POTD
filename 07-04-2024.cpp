//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		
	int help(int i,int j,int a[],int b[],int n,int m,int d,vector<vector<int>>&v)
	{
	   if(i==n || j==m)
	   return 0;
	   if(v[i][j]!=-1)
	   return v[i][j];
	   int s1=0,s2=0;
	   if(d>0)
	   {
	       s1+=help(i+1,j,a,b,n,m,d-1,v);
	   }
	    s2+=a[i]*b[j]+help(i+1,j+1,a,b,n,m,d,v);
	    return v[i][j]= max(s1,s2);
	}
	public:
	int maxDotProduct(int n, int m, int a[], int b[]) 
	{ 
	 int diff=n-m;
	 vector<vector<int>>v(n,vector<int>(m,-1));
	 return help(0,0,a,b,n,m,diff,v);// Your code goes here
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

        for(int i = 0; i < m; i++)
        	cin >> b[i];

       

	    Solution ob;
	    cout << ob.maxDotProduct(n, m, a, b) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
