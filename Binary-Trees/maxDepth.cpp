// Problem: Maximum depth of a binary tree.
// Approach: travelling through all the nodes of the tree recursively and taking maximum of left and rihgt subtree in 0(n) complexity.

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
   int height(TreeNode* node){
    if(node==NULL){
      return 0;
    }
   return max(height(node->left), height(node->right))+1;

   
   }
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};