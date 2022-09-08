class Solution {
public:
    int ans;
    void solve(vector<bool> &visited, int end, int pos = 1){
        if(pos == end+1){
            ans++;
            return;
        }
        for(int i=1;i<=end;i++){
            if(!visited[i] && (pos%i == 0 || i%pos == 0)){
                visited[i] = true;
                solve(visited, end, pos+1);
                visited[i] = false;
            }
        }
    }
    int countArrangement(int n) {
        ans = 0;
        vector<bool> visited(n);
        solve(visited, n);
        return ans;
    }
};