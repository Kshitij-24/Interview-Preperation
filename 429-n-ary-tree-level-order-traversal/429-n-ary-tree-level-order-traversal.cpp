/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
         vector<vector<int>> ans;
        
        function<void(Node*, int)> dfs = [&] (Node* cur, int lvl) {
            if(lvl == ans.size()) ans.push_back({});
            ans[lvl].push_back(cur->val);
            for(auto &child : cur->children) {
                dfs(child, lvl + 1);
            }
        };
        
        if(root) dfs(root, 0);
        return ans;
    }
};