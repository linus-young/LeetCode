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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    	// 注意此处虽然 二叉查找树是左边 < 根节点的值，右边 >= 根节点的值，
    	// 但是由于一个节点可以是其自身的后代，因此两个比较用的是不严格比较
        if((p->val <= root->val && q->val >= root->val) || (p->val >= root->val && q->val <= root->val))
        	return root;
        if(p->val < root->val && q->val < root->val)
        	return lowestCommonAncestor(root->left, p, q);
        if(p->val >= root->val && q->val >= root->val)
        	return lowestCommonAncestor(root->right, p, q);
    }
};