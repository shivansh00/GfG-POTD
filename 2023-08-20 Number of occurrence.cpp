class Solution{
public:	
	int count(int arr[], int n, int x) {
	    // code here
	    return upper_bound(arr, arr + n, x) - lower_bound(arr, arr + n, x);
	}
};
