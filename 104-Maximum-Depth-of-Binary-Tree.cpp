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
    int maxDepth(TreeNode* root) {
    	// Version 1


        // if(root == NULL)
        //     return 0;
        // else if(root->left == NULL && root->right == NULL)
        //     return 1;
        // else {
        // 	// If you don't use local variable to store left-sub-tree depth and right-sub-tree depth, and compare them in a single line of code like this:

        // 	// return 1 + ((maxDepth(root->left) > maxDepth(root->right)) ? maxDepth(root->left) : maxDepth(root->right));

        // 	// You'll get TLE error :(

        // 	int left_depth = maxDepth(root->left);
        // 	int right_depth = maxDepth(root->right);

        // 	return 1 + ((left_depth > right_depth) ? left_depth : right_depth);
        // }



        //  Version 2

        if(root == NULL)
        	return 0;
        else
        	return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};