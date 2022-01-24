class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int cnt=0;
        int pos=-1;
        for(int i=0;i<n;i++){
        if(isupper(word[i])){
            cnt++;
            pos=i;          //pos will store the last position of the capital letter
        }
        
        }
        
        // cnt==n means all are capital  (pos=n-1)
        // cnt==0 means all are small    (pos=-1)
        // pos==0 means first is caps and rest small
    if(cnt==0 || cnt==n || pos==0) return true;
    else return false;
    }
};