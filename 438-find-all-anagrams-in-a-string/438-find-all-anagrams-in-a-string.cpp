class Solution {

public:
    vector<int> findAnagrams(string s, string p) {
        // we will use sliding window and hashmap approch

        vector<int> ans;
        vector<int> sHash(26,0);
        vector<int> pHash(26,0);
        int windowSize = p.size();
        int len = s.size();
        if(len<windowSize)
            return ans;
        int left = 0,right = 0;
        while(right<windowSize)
        {
            pHash[p[right]-'a'] +=1;
            sHash[s[right++]-'a'] +=1;
        }
        right -=1;
        while(right<len)
        {
            if(pHash == sHash)
                ans.push_back(left);
            right+=1;
            if(right!=len)
                sHash[s[right]-'a'] +=1;
            sHash[s[left]-'a'] -=1;
            left+=1;
        }
        return ans;
    }
};