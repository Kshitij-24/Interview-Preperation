class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> st;
        int n = nums.size();
        int len = (n*(n+1))/2;
        int sum = 0,sum2 = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto x: st){
            sum2 += x;
        }
        int repeatednum = sum-sum2;
        int missingnum = len-sum2;
        
        ans.push_back(repeatednum);
        ans.push_back(missingnum);
        return ans;
        
        
    }
};