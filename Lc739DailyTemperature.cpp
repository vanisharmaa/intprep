vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> output(temperatures.size(), 0);
        stack<int> st;
        for(int i = 0 ; i < temperatures.size(); i++){
            if (st.empty())
                st.push(i);
            else if(temperatures[i] < temperatures[st.top()])
                st.push(i);
            else{
                while(!st.empty() and temperatures[i] > temperatures[st.top()]){
                    output[st.top()] = i - st.top();
                    st.pop();
                }
                st.push(i);
            }
        }
        return output;
    }
