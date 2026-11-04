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
    private:
    bool help(TreeNode* p , TreeNode* q)
    {
        if(!p && !q)
        return true;

        if(!p || !q || p->val != q->val)
        return false;

        return help(p->left , q->left) && help(p->right , q->right);

    }


public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
       return help(p, q);
    }
};
