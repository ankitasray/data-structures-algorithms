class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1=haystack.size();
        int n2=needle.size();
        int i=0;
        int j=0;
        int start=0;
        if(n2>n1){
            return -1;
        }
        while(i<n1 && j<n2){
            if(haystack[i]==needle[j]){
                if(i-start+1==n2){
                    return start;
                }
                i++;
                j++;
            }else{
                j=0;
                start++;
                i=start;
            }
        }
        return -1;
    }
};

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1=haystack.size();
        int n2=needle.size();

        if(n2>n1){
            return -1;
        }
        for(int i=0;i<n1-n2+1;i++){
            if(haystack.substr(i,n2)==needle){
                return i;
            }
            
        }
        return -1;
    }
};

class Solution {
public:
    int strStr(string hay, string need) {
        if(need.size()==0) return 0;
        for(int i=0;i<hay.size();i++)
        {
            if(hay[i]==need[0] && isEqual(hay.substr(i),need)) return i;
        }
        return -1;
    }
    bool isEqual(string s1,string s2)
        {
            if(s1.size()<s2.size()) return false;
            for(int i=0;i<s2.size();i++)
            {
                if(s1[i]!=s2[i]) return false;
            }
            return true;
        }
};

class Solution {
public:
    int strStr(string ha, string ne) {
        return ha.find(ne);
    }
};
