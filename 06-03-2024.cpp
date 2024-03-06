class Solution
{
    int mod = INT_MAX , d = 256;
    private:
        void solve(string pat ,string txt , vector<int> &ans)
        {
            int n = txt.size() , m = pat.size();
            int HvalPat = 0 , HvalTxt = 0;
            int h = 1; //spacial value frequently
                      // used in hash function ,  h = d power m-1
            
            for(int i  = 0; i<m-1; i++) h = (h*d)%mod;
            
            //hash value of pattern
            // i.e for pat = abc we want HvalPat = 1*d^2 + 2*d + 3*1
            //also find the hash value of text of size m
            for(int i = 0; i<m; i++)
            {
                HvalPat = (HvalPat*d + pat[i]) % mod;
                HvalTxt = (HvalTxt*d + txt[i]) % mod;
            }
            
            int j = 0;
            for(int i = 0; i<=n-m; i++)
            {
                //if the hash value of pat and txt matches
                //aka superious hit,              then match characters one ny one
                if(HvalPat == HvalTxt)
                {
                    for(j = 0; j<m; j++)
                    {
                        if(pat[j] != txt[i+j])
                         break;
                    }
                    if(j == m)
                       ans.push_back(i+1);
                }
                if(i<n-m) //if more window is possible in text of size m
                {
                    //slide to next wondow and get the new hash key for text
                    HvalTxt = ( d*(HvalTxt - h*txt[i]) + txt[i+m] ) % mod;
                    if(HvalTxt < 0)
                       HvalTxt = HvalTxt + mod;
                }
            }
            
                        
        }
    public:
        vector <int> search(string pattern, string text)
        {
            vector<int> ans;
            solve(pattern , text, ans);
            if(ans.size() == 0) return {};
            return ans;
        }
     
};
