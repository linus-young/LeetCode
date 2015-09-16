/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
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
    }

private:
    vector<int> node;

};