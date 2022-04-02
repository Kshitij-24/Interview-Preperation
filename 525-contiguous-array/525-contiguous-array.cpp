class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> umap;
        int ans = 0;
        int sum = 0;
        umap.insert({0, -1});
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0)
                sum += -1;
            else
                sum += 1;
            if(umap.find(sum) != umap.end()){
                int idx = umap[sum];
                int len = i-idx;
                if(len > ans)
                    ans = len;
            }
            else
                umap.insert({sum,i});
        }
        return ans;
    }
};