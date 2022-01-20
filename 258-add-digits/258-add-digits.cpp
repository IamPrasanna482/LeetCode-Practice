class Solution {
    
private:
    int sum(int n){
        int s=0;
        while(n){
            s+=n%10;
            n/=10;
        }
        return s;
    }
    
    int no_of_digits(int n){
        
        int d=0;
        while(n){
            d++;
            n/=10;
        }
        return d;
    }
public:
    int addDigits(int num) {
//         if(num==0) return 0;
//     while(no_of_digits(sum(num))!=1){
//         num=sum(num);
//     }
//         return sum(num);
        
        //optimized approach
        if(num==0) return 0;
        if(num%9==0) return 9;
        return num%9;
    
    }
};