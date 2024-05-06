/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       // base case
       if(root==NULL || root==p || root==q){
            return root;
       }

       TreeNode *left = lowestCommonAncestor(root->left,p,q);
       TreeNode *right = lowestCommonAncestor(root->right,p,q);

       // after iterating back through recursion , we calculate the result as:
       if(left==NULL){
        return right;
       }
       else if(right==NULL){
        return left;
       }
       else{ // if both left and right are not null , we found the result lca(p,q)
           return root;
       }
    }
};