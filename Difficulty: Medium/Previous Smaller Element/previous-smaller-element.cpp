class Solution {
public:
    vector<int> prevSmaller(vector<int> &arr) {
        int n = arr.size();
        vector<int> result(n);
        stack<int> st;

        for(int i = 0; i < n; i++) {
            
            while(!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }
            
            if(st.empty())
                result[i] = -1;
            else
                result[i] = st.top();
            
            st.push(arr[i]);
        }
        
        return result;
    }
};