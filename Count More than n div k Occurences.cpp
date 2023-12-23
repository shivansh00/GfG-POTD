class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        float c= n;
        c/= k;
        map<int, int> fm;
        for (int i= 0; i < n; i++)
            fm[arr[i]]++;
        int cnt= 0;
        for (auto &e: fm)
            if (e.second > c)
                cnt++;
        return cnt;
    }
};
