class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        float fv= arr.size()/4.0;
        map<int, int> fm;
        for (int &i: arr)
            fm[i]++;
        for (auto [k, v]: fm)
            if (v > fv)
                return k;
        return arr[0];
    }
};
