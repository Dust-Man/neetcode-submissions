class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int zeros = 0;
        for(int n: nums){
            if(n != 0){
                ans.push_back(n);
                continue;
            }
            zeros++;
        }
        for(int i = 0; i < zeros; i++){
            ans.push_back(0);
        }
        nums = ans;
    }
};