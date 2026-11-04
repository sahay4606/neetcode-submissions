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
int help(TreeNode* root, int &rem )
{
    if (!root)
    return 0;

    int left = help(root-> left, rem);
    int right = help(root -> right,rem);

    if(abs(left - right) > 1 )
    rem=  -1;



    return 1 + max(left , right);



}
public:
    bool isBalanced(TreeNode* root) 
    {
        int rem = 0;
        help (root, rem);

        return rem == -1 ? false : true ;

        
    }
};
