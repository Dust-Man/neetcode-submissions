class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int m;
        int mini = nums[0];
        int minIdx = 0;
        while(l <= r){
            int mid = (l+r) / 2;
            if(nums[l] <= nums[r]){
                if(nums[l] <= mini){
                    mini = nums[l];
                    minIdx = l;
                }
                break;
            }
            if(nums[mid] <= mini){
                mini = nums[mid];
                minIdx = mid;
            }
            if(nums[mid] >= nums[l]){
                l = mid + 1;
            } else{
                r = mid - 1;
            }
        }
        if(target >= mini and target <= nums[nums.size() -1]){
            l = minIdx;
            r = nums.size()-1;
            
        } else{
            l = 0;
            r = minIdx - 1;
        }
        cout << mini << endl;
        cout << "l:" << l << "r:" << r << endl;
        
        while(l <= r){
            int mid = (l+r) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] >= target){
                r = mid - 1;
            } else{
                l = mid + 1;
            }
        }
        return -1;
    }
};
