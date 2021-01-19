/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/* No.83 */

struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head == NULL)
        return NULL;

    struct ListNode *p;
    int tmp = head->val;
    p = head;

    while(p != NULL)
    {
        if(p->next != NULL && p->next->val == tmp)
        {
            p->next = p->next->next;
        }
        else
        {
            p = p->next;
            if(p != NULL)
                tmp = p->val;
        }
    }

    return head;
}