
class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
      vector<int>v(26,0);
      for(int i=0;i<s.size();i++)
      {
          if(s[i]>='A' && s[i]<='Z' && v[s[i]-'A']==0)
          v[s[i]-'A']++;
          if(s[i]>='a' && s[i]<='z' && v[s[i]-'a']==0)
          v[s[i]-'a']++;
          
      }
      int ct=0;
      for(auto x:v)
      {
          if(x==1)
          ct++;
      }
      return ct==26;// your code here
    }

};
