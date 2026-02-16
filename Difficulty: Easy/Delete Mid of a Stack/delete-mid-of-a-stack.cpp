class Solution{
public:

    void removeMid(stack<int> &st, int k){
        if(k == 0){
            st.pop();
            return;
        }

        int x = st.top();
        st.pop();

        removeMid(st, k - 1);

        st.push(x);
    }

    void deleteMid(stack<int>& s){
        int size = s.size();
        int mid = (size + 1) / 2;     // from bottom
        int k = size - mid;            // index from top

        removeMid(s, k);
    }
};
