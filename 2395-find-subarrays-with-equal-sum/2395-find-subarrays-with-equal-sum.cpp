class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            mp[nums[i] + nums[i+1]]++;
        }
        for(auto x: mp){
            if(x.second>1)
                return true;
        }
        return false;
    }
};