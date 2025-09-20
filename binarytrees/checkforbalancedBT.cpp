/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
    private:
    int checkheight(TreeNode* root){
        if(!root) return 0;

        int leftheight= checkheight(root->left);
        if(leftheight==-1) return -1;

        int rightheight= checkheight(root->right);
        if(rightheight==-1) return -1;

        if(abs(leftheight-rightheight)>1) return -1;

        return 1+ max(leftheight, rightheight);

    }
public:
    bool isBalanced(TreeNode *root){
    	//your code goes here
        return checkheight(root)!=-1;
    }
};