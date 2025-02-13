recursion + memo
T.C- O(n^3)
class Solution {
public:
    int t[1001][1001];

    bool solve(string &s,int i,int j){
        if(i>=j){
            return 1;
        }
        if(t[i][j] != -1){
            return t[i][j];
        }
        if(s[i]==s[j]){
            return t[i][j] = solve(s,i+1,j-1);
        }
        return t[i][j] = 0;
    }
    string longestPalindrome(string s) {
        memset(t,-1,sizeof(t));
        int maxlen=INT_MIN;
        int sp=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++){
                if(solve(s,i,j)){
                    if(j-i+1 >maxlen){
                        maxlen=j-i+1;
                        sp=i;
                    }
                }
            }
        }
        return s.substr(sp,maxlen);
    }
};
