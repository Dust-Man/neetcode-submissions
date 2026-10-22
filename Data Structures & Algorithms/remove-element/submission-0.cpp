class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> copy(nums.size());
        int copy_idx = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                copy[copy_idx] = nums[i];
                copy_idx++;
            }
        }
        nums = copy;
        cout << copy_idx  << endl;
        return (copy_idx) ;
        
    }
};