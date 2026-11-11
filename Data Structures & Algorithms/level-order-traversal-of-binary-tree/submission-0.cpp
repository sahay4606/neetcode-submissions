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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> v;
        
        queue <TreeNode*> q; ///

        

        if(root)
        q.push(root);
    


        else return v;

        int j = 0;
        while(!q.empty())
        {
            
            int levelsize = q.size();
            vector <int> level; 

            for(int i =0 ; i < levelsize ; i++)
            {
                TreeNode * cur = q.front();
                q.pop(); 
                level.push_back(cur->val);

                if(cur->left)
                q.push(cur->left);

                if(cur->right)
                q.push(cur->right);


            }

            v.push_back(level);
            level.empty();





           

        
            


        }

        return v;
        
    }
};
