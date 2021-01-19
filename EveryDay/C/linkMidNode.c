/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/* No.876 */

struct ListNode* middleNode(struct ListNode* head){
    if(head->next == NULL)
        return head;

    struct ListNode *fast, *slow;
    slow = head;
    fast = slow->next;

    while(fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;

        if(fast != NULL)
            fast = fast->next;
    }

    return slow;
}