/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int kthToLast(struct ListNode* head, int k){
    struct ListNode *p;
    p = head;

    while(k > 0)
    {
        p = p->next;
        k--;
    }
    
    while(p != NULL)
    {
        head = head->next;
        p = p->next;
    }

    return head->val;
}