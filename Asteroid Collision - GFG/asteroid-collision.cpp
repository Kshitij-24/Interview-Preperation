//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        vector<int> ans;
        stack<int> st;
        for(auto x: asteroids){
            if(x>0)
            st.push(x);
            else{
                while(st.size()>0 && st.top()>0 && st.top() < -x)
                st.pop();
                if(st.size() > 0 && st.top() == -x)
                st.pop();
                else if(st.size()>0 && st.top() > -x){
                    
                }
                else
                st.push(x);
            }
        }
        while(!st.empty()){
            int ele = st.top();
            st.pop();
            ans.push_back(ele);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends