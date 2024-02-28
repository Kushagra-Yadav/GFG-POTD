class Solution{
    public:
    int DivisibleByEight(string s){
       if(s.size()<=3)
       return stoi(s)%8==0?1:-1;
       string t="";
       for(int i=s.size()-3;i<s.size();i++)
       t+=s[i];
       return stoi(t)%8==0?1:-1;//code here
    }
};
