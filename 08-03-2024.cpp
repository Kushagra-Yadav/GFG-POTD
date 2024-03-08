//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	   vector<int>freq(26,0);
	   for(int i=0;i<s.size();i++)
	   freq[s[i]-'a']++;
	   vector<int>f;
	   for(auto x:freq)
	   {
	       if(x!=0)
	       f.push_back(x);
	   }
	   map<int,int>m;
	   for(auto x:f)
	   m[x]++;
	   if(m.size()>2)
	   {
	       return 0;
	   }
	   if(m.size()==1)
	   return 1;
	   if(m.begin()->second!=1 && m.rbegin()->second!=1)
	   return 0;
	   
	       return abs(m.begin()->first-m.rbegin()->first)==1;
	 

	   // code here 
	}
};
