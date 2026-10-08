class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> uniques;
        for(int num: nums){
            uniques.insert(num);
        }
        return (nums.size() != uniques.size());
    }
};