1143. Longest Common Subsequence
bottom up
--------------

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();

        int t[m+1][n+1];
        for(int row=0;row<m+1;row++){
            t[row][0]=0;
        }
        for(int col=0;col<n+1;col++){
            t[0][col]=0;
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(text1[i-1]==text2[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }else{
                    t[i][j]=max(t[i][j-1],t[i-1][j]);
                }
            }
        }
        return t[m][n];
    }
};
-------------
recursion+memo
O(2^m+n) || O(mn)
-------------
class Solution {
public:
    int t[1001][1001];
    int solve(string& text1,string& text2,int i,int j){
        if(t[i][j] != -1){
            return t[i][j];
        }
        if(i>=text1.length() || j>=text2.length()){
            return 0;
        }
        if(text1[i]==text2[j]){
            return t[i][j]= 1+solve(text1,text2,i+1,j+1);
        }
        else{
            return t[i][j]=max(solve(text1,text2,i,j+1),solve(text1,text2,i+1,j));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(t,-1,sizeof(t));
        return solve(text1,text2,0,0);
    }
};
