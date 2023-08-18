class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        stack<int> st;
        for (int i= 0; i < n; i++) {
            while (!st.empty() and st.top() < a[i])
                st.pop();
            st.push(a[i]);
        }
        vector<int> ans(st.size());
        for (int i= st.size()-1; i >= 0; i--) {
            ans[i]= st.top();
            st.pop();
        }
        return ans;
    }
};
