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
   


    TreeNode* invertTree(TreeNode* root) 
    {

         if(root == nullptr)
            return nullptr;
        queue <TreeNode*> queue;

        queue.push(root);
       

        while(!queue.empty())
        {
            TreeNode* cur = queue.front();

            queue.pop();
            swap (cur-> left , cur->right);

            if(cur->left != nullptr)
            queue.push(cur->left);

            if(cur->right != nullptr)
            queue.push(cur->right);





        }

        return root;
        
    }
};
