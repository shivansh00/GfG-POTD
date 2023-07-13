class Solution {
    unordered_map<int, int> fm;
    unordered_set<int> fs;
public:
    bool isFrequencyUnique(int n, int arr[]) {
        for (int i= 0; i < n; i++)
            fm[arr[i]]++;
        for (auto &it: fm)
            if (fs.find(it.second) != fs.end())
                return false;
            else    fs.insert(it.second);
        return true;
    }
};
