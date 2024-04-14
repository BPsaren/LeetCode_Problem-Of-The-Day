/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

 int solve(TreeNode* curr, bool isleft){
   if(curr==nullptr){
    return 0;
   }  

   int leftSum=0;
   if(curr->left==NULL && curr->right==NULL && isleft==true){
       return curr->val;
   }

    leftSum+=solve(curr->left,true);
    leftSum+=solve(curr->right,false);
    return leftSum;

 }
    int sumOfLeftLeaves(TreeNode* root) {
        /*if (root == nullptr)
            return 0;
        
        int sum = 0;
        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr)
            sum += root->left->val; // If the left child is a leaf, add its value to sum

        // Recursively calculate sum for left and right subtrees
        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);

        return sum;*/



       return  solve(root, false);
    }
};