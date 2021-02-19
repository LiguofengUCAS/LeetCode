/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/* No.101 */

bool isSymmetric(struct TreeNode* root){
    if(!root)
        return true;
    else
    {
        if(!root->left && !root->right)
            return true;
        if(!root->left && root->right || root->left && !root->right)
            return false;
        else
            return twoIsSymmetric(root->left, root->right);
    }
}

int twoIsSymmetric(struct TreeNode* p, struct TreeNode* q){
    if(!p && !q)
        return 1;
    else if(p && !q || !p && q)
        return 0;
    else
    {
        if(p->val == q->val)
            return twoIsSymmetric(p->left, q->right) && twoIsSymmetric(p->right, q->left);
        else
            return 0;
    }
}