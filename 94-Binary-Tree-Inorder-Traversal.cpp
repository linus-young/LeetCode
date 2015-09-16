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
    vector<int> inorderTraversal(TreeNode* root) {
        // Version 1: recursive

        if(root != NULL) {
            inorderTraversal(root->left);
            node.push_back(root->val);
            inorderTraversal(root->right);
        }

        return node;
    }

private:
    vector<int> node;

};