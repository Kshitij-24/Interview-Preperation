class Solution {
public:
    void reverse(vector<int> &arr, int l, int h){
        while(l<h){
            int temp = arr[l];
            arr[l++] = arr[h];
            arr[h--] = temp;
        }
    }
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        for(int i=n-1;i>=0;i--){
            int maxIdx = i;
            for(int j=i-1;j>=0;j--)
                maxIdx = (arr[j] > arr[maxIdx] ? j: maxIdx);
            if(maxIdx != i){
                reverse(arr, 0, maxIdx);
                ans.push_back(maxIdx+1);
                reverse(arr, 0, i);
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};