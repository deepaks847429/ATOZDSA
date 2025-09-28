class Solution {    

public:

int maxSum=INT_MIN;

int helper(TreeNode*root){

    if(root==nullptr){

        return 0;

    }

   

    int left=max(0,helper(root->left));

    int right=max(0,helper(root->right));

   

    int pathsum=left+right+root->data;

    maxSum=max(maxSum,pathsum);

    return max(left,right)+root->data;

   

}

    int maxPathSum(TreeNode* root) {

        //your code goes here

       

         helper(root);

         return maxSum;

    }

};  
