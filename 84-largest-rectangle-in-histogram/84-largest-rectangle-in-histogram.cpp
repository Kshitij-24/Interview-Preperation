class Solution {
public:
    void previousSmaller(vector<int> heights, int n, int left[]){
        left[0] = -1;
        stack<int>s;
        s.push(0);
        for(int i=1;i<n;i++){
            while(!s.empty() && heights[s.top()]>=heights[i])
                s.pop();
            if(s.empty())
                left[i] = -1;
            else
                left[i] = s.top();
            s.push(i);
        }
    }
    void nextSmaller(vector<int> heights, int n, int right[]){
        right[n-1] = n;
        stack<int>s;
        s.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i])
                s.pop();
            if(s.empty())
                right[i] = n;
            else
                right[i] = s.top();
            s.push(i);
        }
    }   
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int left[n], right[n];
        
        previousSmaller(heights, n, left);
        nextSmaller(heights, n, right);
        
        int ans[n];
        for(int i=0;i<n;i++){
            ans[i] = right[i]-left[i]-1;
        }
        int maxArea = INT_MIN;
        for(int i=0;i<n;i++){
            ans[i] = ans[i] * heights[i];
            maxArea = max(maxArea, ans[i]);
        }
        return maxArea;
    }
};