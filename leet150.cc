class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto &token:tokens){
            if(token == "+"){
                int n1 = st.top();st.pop();
                int n2 = st.top();st.pop();
                st.push(n1+n2);
            }
            else if(token == "-"){
                int n1 = st.top();st.pop();
                int n2 = st.top();st.pop();
                st.push(n2-n1);
            }
            else if(token == "*"){
                int n1 = st.top();st.pop();
                int n2 = st.top();st.pop();
                st.push(n1*n2);
            }
            else if(token == "/"){
                int n1 = st.top();st.pop();
                int n2 = st.top();st.pop();
                st.push(n2/n1);
            }
            else{
                st.push(atoi(token.c_str()));
            }
        }
        return st.top();
    }
};
