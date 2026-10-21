class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniques;
        for(auto n: nums){
            uniques.insert(n);
        }
        vector<int> ans (uniques.begin(), uniques.end());
        nums = ans;
        return uniques.size();
    }
};