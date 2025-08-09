// Problem: Zig Zag Traversal of a binary tree.
// Approach: Level order traversal of binary tree along with maintaining a boolean variable to decide left to right or right to left

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
         if(root==NULL)
        return ans;
        queue<TreeNode*>nodesQueue;
        nodesQueue.push(root);
       bool leftToRight=true;
        
        while(!nodesQueue.empty()){
           int size= nodesQueue.size();
           vector<int>v(size);
           for(int i=0;i<size;i++){
              TreeNode* temp=nodesQueue.front();
               nodesQueue.pop();
               int index= leftToRight?i:size-i-1;
               v[index]=temp->val;
               if(temp->left)
                nodesQueue.push(temp->left);
                if(temp->right)
                nodesQueue.push(temp->right);   
           }
           ans.push_back(v);
           leftToRight=!leftToRight;

        }
        return ans;
       
    }
};