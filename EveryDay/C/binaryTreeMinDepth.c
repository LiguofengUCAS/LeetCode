/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/* No.111 */

int minDepth(struct TreeNode* root){
    if(root == NULL)
        return 0;
    
    if(root->left == NULL && root->right == NULL)
        return 1;

    if(root->left == NULL) //root->right can not be NULL
        return 1 + minDepth(root->right);
    else if(root->right == NULL) //root->left can bot be BULL
        return 1 + minDepth(root->left);
    else
        return 1 + fmin(minDepth(root->left), minDepth(root->right));   
}