class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int> umap;
        for(int i=0;i<len;i++)
            umap[nums[i]]++;
        int k = len/2;
        int ans;
        int flag = 0;
        for(auto i: umap){
            if(i.second > k){
                flag = 1;
                ans = i.first;
                break;
            }
        }
        return ans;
    }
};