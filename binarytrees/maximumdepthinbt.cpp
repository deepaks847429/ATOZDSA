/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        //your code goes here
        if(!root) return 0;
        int leftdepth= maxDepth(root->left);
        int rightdepth=maxDepth(root->right);
        return 1+max(leftdepth, rightdepth);
        
    }
};