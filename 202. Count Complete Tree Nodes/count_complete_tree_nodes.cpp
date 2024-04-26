// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */

// **************** TIME COMPLEXITY FOR THIS SOLUTION IS O(N) **************
// class Solution {
// public:
//     int countNodes(TreeNode* root) {
//         int c=0;
//         if(root==NULL) return c;
//         queue <TreeNode*> q;
//         q.push(root);

//         while(!q.empty()){
//             int size = q.size();
//             // vector<int> level;

//             for(int i=0;i<size;i++){
//                 TreeNode* node = q.front();
//                 q.pop();
//                 c++;

//                 if(node->left!=NULL) q.push(node->left);
//                 if(node->right!=NULL) q.push(node->right);

//                 // level.push_back(node->val);
//             }
//         }
//         return c;
//     }
// // };

// Another method which works in time less than O(N)
// ******************* OPTIMIZED SOLUTION ******************

class Solution {
public:
    int countNodes(TreeNode* root) {
             if(root==NULL) return 0;

             int lh = findHeightLeft(root);
             int rh = findHeightRight(root);

             if(lh==rh) return (1<<lh)-1;

             return 1+countNodes(root->left) + countNodes(root->right);
    }

    int findHeightLeft(TreeNode *node){
        int height = 0;
        while(node){
            height++;
            node = node->left;
        }
        return height;
    }
     
    int findHeightRight(TreeNode *node){
        int height = 0;
        while(node){
            height++;
            node = node->right;
        }
        return height;
    }
};