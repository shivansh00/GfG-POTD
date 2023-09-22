class Solution {
    public:
    vector<int> find(int arr[], int n , int x ) {
        // code here
        int l= lower_bound(arr, arr+ n, x)- arr;
        if (arr[l] != x)
            l= -1;
        int r= upper_bound(arr, arr+ n, x)- arr- 1;
        if (arr[r] != x)
            r= -1;
        return {l, r};
    }
};
