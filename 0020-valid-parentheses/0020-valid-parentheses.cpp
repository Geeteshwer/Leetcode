class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(char a : s){
            if(a=='[' || a=='{' || a=='('){
                st.push(a);
            }
            else{
                if(st.empty()){
                return false;
            }
            char t = st.top();
            st.pop();
            if(a==']' && t!='[') return false;
            if(a=='}' && t!='{') return false;
            if(a==')' && t!='(') return false;
        }
    }
        return st.empty();
    }
};