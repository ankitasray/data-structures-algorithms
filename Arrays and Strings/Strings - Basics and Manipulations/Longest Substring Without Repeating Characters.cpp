class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0,maxlen=0,j=0;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            len++;
                while(mp[s[i]]>1){
                    mp[s[j++]]--;
                    len--;
                }
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};
--------
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx=0,i=0,j=0,N=s.size();
        unordered_map<char,int>mp;
        while(j<N){
            mp[s[j]]++;
            if(mp.size()== j-i+1){
                mx=max(mx,j-i+1);
            }
            else if(mp.size()<j-i+1){
                while(mp.size()<j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return mx;
    }
};
t.c- O(N) | s.c- O(1)
