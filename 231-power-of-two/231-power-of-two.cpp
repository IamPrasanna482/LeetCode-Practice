class Solution {
public:
    bool isPowerOfTwo(int n) {
        // any power of two has only 1 bit set
        // eg-> 2 - 10
        //      4 - 100
        //      16- 1000
        
        // a no less than the power of two is
        // 1 - 1
        // 3 - 011
        // 15- 0111
        
        // if we do n&(n-1), it should give 0 for power of two
        // else it is not
         if(n<=0) return false;
        return ((n&(n-1))==0);
        
    }
};