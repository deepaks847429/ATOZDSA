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
    bool ismirror(TreeNode* t1, TreeNode* t2){
        if(!t1 && !t2) return true;
        if(!t1 || !t2) return false;
        return (t1->data==t2->data)
         && ismirror(t1->left, t2->right) &&
        ismirror(t1->right, t2->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        //your code goes here
        if(!root) return true;
       return ismirror(root->left, root->right)
    }
};