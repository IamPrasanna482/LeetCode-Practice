class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;    //initial chars are closing
                char c=st.top();
                st.pop();
                if( (s[i]==')' && c=='(') || (s[i]=='}' && c=='{')                   || (s[i]==']' && c=='[')){
                    
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};