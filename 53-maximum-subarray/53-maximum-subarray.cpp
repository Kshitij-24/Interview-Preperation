class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0;
        int maxNow = INT_MIN;
        for(int i=0;i<nums.size();i++){
            curr += nums[i];
            maxNow = max(maxNow, curr);
            if(curr<0)
                curr = 0;
        }
        return maxNow;
    }
};