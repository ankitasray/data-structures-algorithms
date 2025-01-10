647. Palindromic Substrings

//Approach-1 (Memoization)
//T.C : O(n^2) - Every subproblem is being computed only once and after that it's being reused
//S.C : O(n^2
class Solution {
public:
    int t[1001][1001];
    bool check(string &s, int i, int j) {
        if(i >= j) {
            return true;
        }

        if(t[i][j] != -1) {
            return t[i][j]; //1 : True, 0 : False
        }

        if(s[i] == s[j]) {
            return t[i][j] = check(s, i+1, j-1);
        }

        return t[i][j] = false;

    }
    int countSubstrings(string s) {
        memset(t,-1,sizeof(t));
        int cnt=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(solve(i,j,s)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

//Approach-3(Bottom Up -  Blue Print)
//T.C : O(n^2)
//S.C ; O(n^2)
class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        vector<vector<bool>> t(n, vector<bool>(n, false));
        //t[i][j] = true : s[i:j] is a substring where i and j are inclusive indices

        int count = 0;

        for(int L = 1; L <= n; L++) {
            for(int i = 0; i+L <= n; i++) {
                int j = i + L - 1;

                if(i == j) {
                    t[i][i] = true; //Single characters are palindrome
                } else if(i+1 == j) {
                    t[i][j] = (s[i] == s[j]); //Strings of 2 Length
                } else {
                    t[i][j] = ((s[i] == s[j]) && t[i+1][j-1] == true);
                }

                count += t[i][j];
            }
        }

        return count;
    }
};

