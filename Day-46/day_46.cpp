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

    string result="";
    void  smallestString( TreeNode* root, string curr){
      if(root==nullptr){
        return ;
      }

     curr=char(root->val+'a')+curr;

     if(root->left==NULL && root->right==NULL){
      if(result=="" || result>curr){
            result=curr;
        }
     } 
     smallestString(root->left,curr);
     smallestString(root->right,curr);
      


     }
    string smallestFromLeaf(TreeNode* root) {
        smallestString(root,"");
    return result;
    }
};