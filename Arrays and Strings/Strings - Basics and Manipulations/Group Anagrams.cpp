49. Group Anagrams

Complexity
Time complexity:
O(n∗k∗logk)
(K is the length of the longest string)
Space complexity: O(n∗k)
(K is the length of the longest string)
Code
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;

        for(auto x:strs){
            string word=x;
            sort(word.begin(),word.end());
            mp[word].push_back(x);
        }
        vector<vector<string>>ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
