class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        int cnt[26]={0};

        for(int i=0;i<s.size();i++){
            cnt[s[i]-'a']++;
            cnt[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(cnt[i]!=0){
                return false;
            }
        }
        return true;
    }
};
Complexity
Time Complexity: O(n), where n is the length of the strings.
Space Complexity: O(1), as the array size is fixed and does not grow with the input size
--------------
using sorting
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return s==t;
    }
};
TC- O(nlogn)
------------
using 2 map

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        return 0;

        unordered_map<char , int> mp1,mp2;
        for(char c:s)
        mp1[c]++;
        for(char c:t)
        mp2[c]++;  
            
        for(int j=0;j<=s.size();j++)
        {
            if(mp1[s[j]] != mp2 [s[j]])
            return 0;
        }
        return 1;
    }
};
-----------------
using 1 hash map

#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> count;
        for (char c : s) {
            count[c]++;
        }
        for (char c : t) {
            if (count[c] == 0) {
                return false;
            }
            count[c]--;
        }
        return true; 
    }
};
TC- O(N)
  
