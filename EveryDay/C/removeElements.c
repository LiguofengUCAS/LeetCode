/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    if(head == NULL)
        return NULL;
    
    struct ListNode *pre, *current;
    int count = 1;
    pre = malloc(sizeof(struct ListNode));
    pre->next = head;
    current = pre->next;

    while(current != NULL)
    {
        if(current->val == val)
        {
            pre->next = current->next;
            current = pre->next;
            if(count == 1)
                head = head->next;
        }
        else
        {
            pre = pre->next;
            current = current->next;
            count++;
        }
    }
    
    return head;
}