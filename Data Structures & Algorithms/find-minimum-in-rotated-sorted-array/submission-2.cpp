class Solution {
public:
    int findMin(vector<int> &nums) {
        int target = 3;
        int l = 0, r = nums.size() - 1;
        int ans = nums[0];
        while(l <= r){
            int mid = (l+r) / 2;
            if(nums[l] < nums[r]){
                ans = min(nums[l], ans);
                break;
            }
            ans = min(nums[mid], ans);
            if(nums[mid] >= nums[l]){
                l = mid + 1;
            } else{
                r = mid - 1;
            }
        }
        return ans;
    }
};
