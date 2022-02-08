class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    //using sets
        set<char> s;
        for(auto it:jewels){
            s.insert(it);
        }
        // for(auto it:s){
        //     cout<<it<<" ";
        // }
        
        int ans=0;
        for(auto it:stones){
            if(s.count(it)>0)
            {
                ans++;
            }        
        }
        return ans;
    }
    
};