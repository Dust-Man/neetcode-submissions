class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> prevMap;
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(prevMap[diff])
                return {prevMap[diff] - 1, i};
            prevMap[nums[i]] = i + 1;
        }
    }
};
