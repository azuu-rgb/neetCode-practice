class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size() % 2 != 0)
            return false;

        if(s[0] == ')' || s[0] == '}' || s[0] == ']')  
            return false;

         for(char c : s){
            if(c == '(' || c == '[' || c == '{')
                st.push(c);

            if(c == ')' || c == ']' || c == '}'){
                if(!st.empty()){ 
                    if(c - st.top() == 1 || c - st.top() == 2){
                        st.pop();
                    }else{
                        return false;
                    } 
                }else{
                    st.push(c);
                }
            }
        }
        return st.empty() ? true :false;
    }
};
