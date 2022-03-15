class Solution {
public:
    string minRemoveToMakeValid(string s) {
       //start from beginning
        
        int cnt=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='(') cnt++;
            
            if(s[i]==')'){
                if(cnt==0){
                    //closing k liye opening ni h
                    s[i]='*';
                    // * isko remove kr denge at the end
                }
                else{
                    cnt--;
                    
                }
            }
            }
            cnt=0;
            for(int i=n-1;i>=0;i--){
            if(s[i]==')') cnt++;
            
            if(s[i]=='('){
                if(cnt==0){
                    //closing k liye opening ni h
                    s[i]='*';
                    // * isko remove kr denge at the end
                }
                else{
                    cnt--;
                    
                }
            }
        }
            string ans;
        for(auto it:s){
            if(it!='*'){
                ans.push_back(it);
            }
}
            
            return ans;
    }
};