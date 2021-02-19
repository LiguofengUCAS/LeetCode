/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/* No.100 */

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(!p && !q)
        return true;
    else if(!p && q || p && !q)
        return false;
    else
    {
        if(p->val == q->val)
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        else
            return false;
    }
}