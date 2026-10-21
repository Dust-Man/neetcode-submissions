class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> uniques (nums.begin(), nums.end());
        return (nums.size() != uniques.size());
    }
};