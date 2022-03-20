class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> hs;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int a = nums[i];
            int b = target-a;
            if(hs.find(b) != hs.end()){
                for(int j=0;j<nums.size();j++){
                    if(nums[j] == b){
                        ans.push_back(j);
                        ans.push_back(i);
                        return ans;
                    }
                }
            }
            else{
                hs.insert(a);
            }
        }
        return ans;
    }
};