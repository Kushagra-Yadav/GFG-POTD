class Solution {
public:
    bool isIsomorphic(string s, string t) {
        set<char>st;map<char,char>m;
        for(int i=0;i<s.size();i++)
        {
         if(st.find(s[i])==st.end())
         {
            m[t[i]]=s[i];
            st.insert(s[i]);
         }
         else if(m[t[i]]!=s[i])
         return false;
        }
        for(int i=0;i<s.size();i++)
        if(m[t[i]]!=s[i])
        return false;
        return true;
    }
};
