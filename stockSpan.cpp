#include<bits/stdc++.h>
int* stockSpan(int *arr, int size){
	// Write your code here
    stack<int> st;
    int* output = new int[size];
    int ind = 0;
    for(int i = 0; i < size; i++){
        if(st.empty()){
            output[ind++] = (i+1);
            st.push(i);
        }
        else if(arr[st.top()] > arr[i]){
            output[ind++] = (i - st.top());
            st.push(i);
        }
        else{
            while(!st.empty() && arr[i] > arr[st.top()]){
                st.pop();
            }
            if(st.empty())
                output[ind++] = (i+1);
            else
                output[ind++] = (i-st.top());
            st.push(i);
        }
    }
    return output;
}

