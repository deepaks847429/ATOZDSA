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
		vector<int> preorder(TreeNode* root){

	       //your code goes here
           vector<int> ans;
           preorderhelper(root, ans);
           return ans;
		}

        void preorderhelper(TreeNode* &root, vector<int> &ans){
            if(root==NULL) return;
            ans.push_back(root->data);
            preorderhelper(root->left, ans);
            preorderhelper(root->right, ans);

        }
};