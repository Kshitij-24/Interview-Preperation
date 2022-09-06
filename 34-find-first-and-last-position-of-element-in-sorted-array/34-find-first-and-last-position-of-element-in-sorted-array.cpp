class Solution {
public:
    int firstOcurrence(vector<int> nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int n = nums.size();
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>target)
                high = mid-1;
            else if(nums[mid]<target)
                low = mid+1;
            else{
                if(mid == 0 || nums[mid-1] != nums[mid])
                    return mid;
                else
                    high = mid-1;
            }
        }
        return -1;
    }
    int lastOcurrence(vector<int> nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int n = nums.size();
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>target)
                high = mid-1;
            else if(nums[mid]<target)
                low = mid+1;
            else{
                if(mid == n-1 || nums[mid+1] != nums[mid])
                    return mid;
                else
                    low = mid+1;
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans1 = firstOcurrence(nums, target);
        int ans2 = lastOcurrence(nums, target);
        vector<int> ans;
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};