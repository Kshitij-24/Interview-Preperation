class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // if(nums.size())
        unordered_set<int> st;
        int res = 0;
        for(int i=0;i<nums.size();i++)
            st.insert(nums[i]);
        for(auto x: st){
            if(st.find(x-1) == st.end()){
                int curr = 1;
                while(st.find(curr + x) != st.end())
                    curr++;
                res = max(curr, res);
            }
        }
        return res;
    }
};