/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/* No.104 */

int maxDepth(struct TreeNode* root){
    if (!root)
        return 0;
    
    if (!root->left && !root->right)
        return 1;

    else
        return 1 + fmax(maxDepth(root->left), maxDepth(root->right));
}