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
    int sumOfLeftLeaves(TreeNode* root) {
       return find_val(root,1);
    }

    int find_val(TreeNode* root,int flag){
        if(root==NULL) return 0;
        if(flag==0 && root->right==NULL && root->left==NULL) return root->val;
        return find_val(root->left,0)+find_val(root->right,1);
    }
};