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
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* temp=root;
        vector<int>ans;
        if(temp==NULL)
        return{};
        vector<int>left=inorderTraversal(temp->left);
        ans.insert(ans.end(),left.begin(),left.end());
        ans.push_back(temp->val);
        vector<int>right=inorderTraversal(temp->right);
        ans.insert(ans.end(),right.begin(),right.end());
        return ans;
    }
};