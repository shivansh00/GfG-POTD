class Solution {
    map<string, int> fm;
    set<string> s;
  public:
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n) {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        int maxi= 0;
        for (int i= 0; i < n; i++)
            maxi= max(maxi, ++fm[arr[i]]);
        for (auto &it: fm)
            if (it.second == maxi)
                s.insert(it.first);
        return {*s.begin(), to_string(maxi)};
    }
};
