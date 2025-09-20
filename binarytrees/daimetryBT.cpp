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
    private:
    int height (TreeNode* root, int &daimeter){
        if(!root) return 0;
        int leftheight=  height(root->left, daimeter);
        int rightheight= height(root->right, daimeter);

        daimeter=max(daimeter, leftheight + rightheight);
        return 1+max(leftheight, rightheight);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        //your code goes here
        int daimeter=0;
        height(root, daimeter);
        return daimeter;
    }
};