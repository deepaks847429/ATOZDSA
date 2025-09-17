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
		vector<int> postorder(TreeNode* root){
	        //your code goes here
            vector<int>ans;
            postorder(root, ans);
            return ans;
		}

        void postorder(TreeNode* &root, vector<int>&ans){
            if(root==NULL) return;
            postorder(root->left, ans);
            postorder(root->right, ans);
            ans.push_back(root->data);

        }
};