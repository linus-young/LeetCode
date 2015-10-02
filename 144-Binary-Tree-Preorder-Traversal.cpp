/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// Testcase:
// input:
//     [5,4,7,3,null,2,null,-1,null,9]
// output:
//     [5,4,3,-1,7,2,9]

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        // Version 1: recursive

        if(root != NULL) {
        	node.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return node;


        // Version 2: dfs

    }

private:
    vector<int> node;

};