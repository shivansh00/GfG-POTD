class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int fives= 0, tens= 0;
        for (int &bill: bills) {
            if (bill == 5)
                fives++;
            else if (bill == 10) {
                if (!fives)
                    return false;
                else {
                    fives--;
                    tens++;
                }
            }
            else {
                if (fives) {
                    if (tens) {
                        tens--;
                        fives--;
                    }
                    else if (fives >= 3)
                        fives-= 3;
                    else    return false;
                }
                else    return false;
            }
        }
        return true;
    }
};
