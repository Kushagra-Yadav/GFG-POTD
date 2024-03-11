//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	   int i=0 ,j=0,k=n-1,l=n-1;int ct=0;
	   while(i<=n-1 && k>=0)
	   {
	       if(mat1[i][j]+mat2[k][l]==x)
	       {
	           ct++;
	           j++;l--;
	       }
	       else if(mat1[i][j]+mat2[k][l]<x)
	       {
	           j++;
	       }
	       else if(mat1[i][j]+mat2[k][l]>x)
	       {
	           l--;
	       }
          if(j==n)
           {
               i+=1;j=0;
           }
           if(l==-1)
           {
               k-=1;l=n-1;
           }
	   }
	   return ct;// Your code goes here
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
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}
// } Driver Code Ends
