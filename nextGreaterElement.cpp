//next greater element in an array

#include<bits/stdc++.h>
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
    // Write your code here
    stack<int> st;
    vector<int> output(arr.size(), -1);
    for(int i = 0; i < arr.size(); i++){
        if (st.empty())
            st.push(i);
        else if (arr[i] < arr[st.top()])
            st.push(i);
        else{
            while(!st.empty() and arr[i] > arr[st.top()]){
                output[st.top()] = (arr[i]);
                st.pop();
            }
            st.push(i);
        }
    }
    return output;
}
