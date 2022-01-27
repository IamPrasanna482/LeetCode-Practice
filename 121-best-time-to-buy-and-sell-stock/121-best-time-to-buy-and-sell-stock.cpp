class Solution {
private:
    int MAXP(vector<int> &v,int start,int end){
        int maxi=v[start];
        for(int i=start;i<end;i++){
            maxi=max(maxi,v[i]);
        }
        return maxi;
    }
public:
    
    //approach 1-> for each index, search in the right array, if there is any larger 
    //  element, take the diff of both and compare with max_profit
    //  at the end, return the max value of the max_profit;
    
    
    int maxProfit(vector<int>& prices) {
//         int max_profit=0;
//         int n=prices.size();
//         for(int i=0;i<n-1;i++){
//             int  x=MAXP(prices,i+1,n);
//             if(x>prices[i]){
//                 max_profit=max(max_profit,x-prices[i]);
//             }
//         }
//         return max_profit;
    
        // approach 2(strivers)
    
            int minPrice=INT_MAX;
            int n=prices.size();
            int maxPro=0;
            for(int i=0;i<n;i++){
                minPrice=min(minPrice,prices[i]);
                maxPro=max(maxPro,prices[i]-minPrice);
            }
            return maxPro;
    
    
        
    
    
    
    }
};