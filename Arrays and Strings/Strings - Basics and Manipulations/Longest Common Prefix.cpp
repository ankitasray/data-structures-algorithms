Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.


BruteForce
---------------
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        string ref=strs[0];
        for(int i=0;i<ref.size();i++){
            int j=1;
            for(;j<strs.size();j++){
                if(ref[i]!=strs[j][i]){
                    break;
                }
            }
            if(j==strs.size()){
                ans+=ref[i];
            }else{
                break;
            }
        }
        return ans;
    }
};
-----------------
Optimize
---------------
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0)
        {
            return "";
        }
        string ans="";
        sort(begin(strs),end(strs));
        string a=strs[0];
        string b=strs[n-1];
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[i])
            {
                ans=ans+a[i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
