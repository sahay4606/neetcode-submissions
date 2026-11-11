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
vector<vector<int>> v; // public mei direct 

    vector<vector<int>> levelOrder(TreeNode* root) // for dfs ( we will send the root and depth)
    {
         dfs(root, 0);
        if(!root)
        return v;

    }

    void dfs(TreeNode* node , int depth) // base case , see if new empty vector has to be made or not , if made then for that index fill value , and recurse 
    {
        if(!node)
        return ;

        if(depth == v.size())
        v.push_back(vector<int>());

        v[depth].push_back(node->val);

        dfs(node->left , depth + 1);
        dfs(node ->right, depth + 1);



    }



    
};
