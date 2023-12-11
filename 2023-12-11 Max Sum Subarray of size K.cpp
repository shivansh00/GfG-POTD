class Solution{   
    long long sum, maxSum;
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n) {
        // code here 
        sum= maxSum= accumulate(arr.begin(), arr.begin()+ k, 0L);
        for (int i= k; i < n; i++) {
            sum+= arr[i]- arr[i-k];
            maxSum= max(sum, maxSum);
        }
        return maxSum;
    }
};
