class Solution {
public:
    bool checkA(vector<int> &a,vector<int> &b)
    {
        for(int i=0;i<26;i++)
        {
            if(a[i] != b[i])
            {
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        if(p.size() > s.size())
        {
            return {};
        }
        vector<int> freqP(26,0);
        vector<int> freqS(26,0);
        vector<int> ans;
        for(auto &x:p){
            freqP[x-'a']++;
        }
        int i=0,j=0;
        while(j<s.size()){
            freqS[s[j]-'a']++;
            if(j-i+1 == p.size()){
                if(checkA(freqS,freqP))
                {
                    ans.push_back(i);
                }
            }
            if(j-i+1 < p.size())
            {
                j++;
            }
            else 
            {
                freqS[s[i]-'a']--;
                i++;
                j++;
            }
        }
        return ans;
    }
};
