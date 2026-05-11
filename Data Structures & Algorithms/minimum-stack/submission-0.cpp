class MinStack {
public:
    int min;
    stack <int> st;
    stack <int> stM;

    MinStack() {
        
    }
    
    void push(int val) {
        if(stM.empty())
            min = INT_MAX;

        if(val <= min){
            min = val;
            stM.push(min);
        }
           
        st.push(val);    
    }
    
    void pop() {
        int pop;
        if(!st.empty()){
            pop = st.top();

        if(pop == stM.top() && !stM.empty())
            stM.pop();

        st.pop(); 
        }   
    }
    
    int top() {
      
        return st.top();
    }
    
    int getMin() {
        
        return stM.top();
    }
};

