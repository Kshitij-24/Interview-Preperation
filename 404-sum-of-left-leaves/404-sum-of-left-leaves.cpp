/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum = 0;
    void getSum(TreeNode* root, int flag){
        if(!root)
            return ;
        if(root->left == NULL && root->right == NULL){
            if(flag == 0)
                sum += root->val;
        } 
        getSum(root->left, 0);
        getSum(root->right, 1);
    }
    int sumOfLeftLeaves(TreeNode* root) {
           getSum(root, -1);
        return sum;
        
    }
};