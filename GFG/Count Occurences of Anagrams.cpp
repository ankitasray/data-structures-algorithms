class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int K= pat.size();
	    int n= txt.size();
	    int i=0,j=0;
	    int res=0;
	    unordered_map<char,int>mp;
	    for(auto ch:pat){
	        mp[ch]++;
	    }
	    int count=mp.size();
	    while(j< n){
	        if (mp.find(txt[j]) != mp.end()){
                mp[txt[j]]--;
                if (mp[txt[j]] == 0){
                    count--;
                }
            }
	        if(j-i+1 < K){
	            j++;
	        }
	        else if(j-i+1 == K){
	            if (count == 0){
                res++;
            }
            if (mp.find(txt[i]) != mp.end()){
                mp[txt[i]]++;
                if (mp[txt[i]] == 1){
                    count++;
                }
            }
                i++;
                j++; 
	        }
	    }
	    return res;
	}

};
