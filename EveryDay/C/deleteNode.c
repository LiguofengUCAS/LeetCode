/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/* No.237 */

void deleteNode(struct ListNode* node) {
    struct ListNode *nxt;
    nxt = node->next;
    while(nxt->next != NULL)
    {
        node->val = nxt->val;
        node = node->next;
        nxt = nxt->next;
    }
    node->val = nxt->val;
    node->next = NULL;
}