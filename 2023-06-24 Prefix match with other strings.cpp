class Solution {
    int cnt= 0;
public:
    int klengthpref(string arr[], int n, int k, string str){
        if (k > str.size()) return 0;
        str= str.substr(0, k);
        for (int i= 0; i < n; i++)
            cnt+= str == arr[i].substr(0, k);
        return cnt;
    }
};
