class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                int x1=st.top();
                st.pop();
                int x2=st.top();
                st.push(x1);
                st.push(x1+x2);
            }
            else if(ops[i]=="D"){
                int x=st.top();
                st.push(x*2);
            }
            else if(ops[i]=="C"){
                st.pop();
            }
            else{
                st.push(stoi(ops[i]));
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            // cout<<st.top()<<" ";
            st.pop();
        }
        return ans;
    }
};