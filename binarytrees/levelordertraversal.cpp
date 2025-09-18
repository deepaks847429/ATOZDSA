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
    vector<vector<int> > levelOrder(TreeNode* root) {
        //your code goes here
        vector<vector<int>> traversed;
        if (root == nullptr) return traversed;  // base case check
        queue<TreeNode*> qtree;
        qtree.push(root);
        while(!qtree.empty()){
            int qsize=qtree.size();
            vector<int> currlevel;
            for(int i=0; i<qsize; i++){
                TreeNode* node=qtree.front();
                qtree.pop();
                currlevel.push_back(node->data);
                if(node->left) qtree.push(node->left);
                if(node->right) qtree.push(node->right);
            }
            traversed.push_back(currlevel);
        }
        return traversed;
        
    }
};