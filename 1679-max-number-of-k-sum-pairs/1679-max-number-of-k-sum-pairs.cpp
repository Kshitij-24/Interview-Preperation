class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_set<int> hs;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = n-1;
        int ans=0;
        while(left<right){
            int sum = nums[left] + nums[right];
            if(sum == k){
                ans++;
                left++;
                right--;
            }
            else if(sum>k)
                right--;
            else
                left++;
        }
        // for(int i=0;i<nums.size();i++){
        //     int a = nums[i];
        //     int b = k-a;
        //     if(hs.find(b) != hs.end()){
        //         ans++;
        //         hs.erase(a);
        //         hs.erase(b);
        //     }
        //     else{
        //         hs.insert(a);
        //     }
        // }
        return ans;
    }
};