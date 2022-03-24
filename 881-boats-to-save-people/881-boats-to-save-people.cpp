class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // sort the people array.
        // make the lightest and the heaviest person to sit together
        // if it is possible, increase cnt
        // else let only the heavier one to sit
        
        // greedy
        // two-pointer 
        // O(N)
        
        int n=people.size();
        sort(people.begin(),people.end());
        int i=0,j=n-1;
        int cnt=0;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                i++;
                j--;
            }
            else j--;
            
            cnt++;
        }
        return cnt;
    }
};