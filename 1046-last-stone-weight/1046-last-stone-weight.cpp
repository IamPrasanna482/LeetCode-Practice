class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
            // 8,7,4,2,1,1
            // 4,2,1,1,1
            // 2,1,1,1
            // 1,1,1
            // 0,1
            // 1
                
            priority_queue<int> pq;
            for(auto it:stones) pq.push(it);
        
            // while(!pq.empty()){
            //     int x=pq.top();
            //     cout<<x<<" ";
            //     pq.pop();
            // }
            
            
        
            while(pq.size()!=1){
                int y=pq.top();
                pq.pop();
                int x=pq.top();
                pq.pop();
                if(pq.size()==0 && x==y) return 0;
                if(x==y){
                    continue;
                }
                else{
                    pq.push(y-x);
                }
            }
        
       
        return pq.top();
    }
};