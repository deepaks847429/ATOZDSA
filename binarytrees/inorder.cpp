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
	public:
		vector<int> inorder(TreeNode* root){
	        //your code goes here
            vector<int> ans;
            inorderhelper(root, ans);
            return ans;
		}
        void inorderhelper(TreeNode* & root, vector<int> & ans){
            if(root==NULL) return;
            inorderhelper(root->left, ans);
            ans.push_back(root->data);
            inorderhelper(root->right, ans);
        }

};