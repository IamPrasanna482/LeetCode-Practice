class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int ans=0;
        for(int i=0;i<jewels.length();i++){
            for(int j=0;j<stones.length();j++){
                if(jewels[i]==stones[j]) ans++;
            }
        }
        return ans;
    //using sets
//         set<char> s;
//         for(auto it:jewels){
//             s.insert(it);
//         }
//         // for(auto it:s){
//         //     cout<<it<<" ";
//         // }
        
//         int ans=0;
//         for(auto it:stones){
//             if(s.count(it)>0)
//             {
//                 ans++;
//             }        
//         }
//         return ans;
    }
    
};