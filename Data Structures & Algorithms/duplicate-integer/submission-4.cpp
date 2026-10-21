class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> uniques (nums.begin(), nums.end());
        if((nums.size() - uniques.size()) == 0)
            return false;
        return true;
    }
};