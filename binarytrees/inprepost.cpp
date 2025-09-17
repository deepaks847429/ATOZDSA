/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
 * };
 **/

class Solution {
public:
    vector<vector<int>> treeTraversal(TreeNode* root) {
        vector<vector<int>> ans(3);  // Will store inorder, preorder, and postorder
        vector<int> inorder, preorder, postorder;
        helper(root, inorder, preorder, postorder);
        ans[0] = inorder;   // ans[0] will store inorder traversal
        ans[1] = preorder;  // ans[1] will store preorder traversal
        ans[2] = postorder; // ans[2] will store postorder traversal
        return ans;
    }

private:
    void helper(TreeNode* root, vector<int>& inorder, vector<int>& preorder, vector<int>& postorder) {
        if (root == nullptr) return;

        // Preorder (visit node first)
        preorder.push_back(root->data);
        
        // Inorder (visit left, then node)
        helper(root->left, inorder, preorder, postorder);
        inorder.push_back(root->data);
        
        // Postorder (visit left, right, then node)
        helper(root->right, inorder, preorder, postorder);
        postorder.push_back(root->data);
    }
};
