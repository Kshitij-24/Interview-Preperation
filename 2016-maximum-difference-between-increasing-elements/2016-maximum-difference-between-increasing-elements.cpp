class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res = nums[1] - nums[0];
        int minEle = nums[0];
        for(int i=1;i<nums.size();i++){
            res = max(res, nums[i]-minEle);
            minEle = min(minEle, nums[i]);
        }
        if(res<=0)
            return -1;
        return res;
    }
};