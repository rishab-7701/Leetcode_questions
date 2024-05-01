
// ************** This solution uses one stack and therefore its space complexity is O(N) and time complexity is O(2N)
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> post;
        stack<TreeNode*> st;
        TreeNode* cur=root;
        TreeNode* temp;

        while(cur!=NULL || !st.empty()){
            if(cur!=NULL){
                st.push(cur);
                cur=cur->left;
            }
            else {
                temp = st.top()->right;
                if(temp==NULL){
                    temp=st.top();
                    st.pop();
                    post.push_back(temp->val);

                    while(!st.empty() && temp==st.top()->right){
                        temp=st.top();
                        st.pop();
                        post.push_back(temp->val);
                    }
                }
                else{
                    cur=temp;
                }
            }
        }
       return post;
    }
};