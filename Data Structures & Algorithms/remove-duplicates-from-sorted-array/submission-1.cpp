class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniques(nums.begin(), nums.end());
        vector<int> ans (uniques.begin(), uniques.end());
        nums = ans;
        return uniques.size();
    }
};