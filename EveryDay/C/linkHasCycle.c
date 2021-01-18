/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
/* No.141 */

bool hasCycle_1(struct ListNode *head) {
    int i = 10000;

    if(head == NULL || head->next == NULL)
        return false;
   
    while(i >= 0)    
    {
        if(head == NULL)
            return false;
        else
            i--;

        head = head->next;
    }

    return true;
}


bool hasCycle_2(struct ListNode *head) {
    if(head == NULL || head->next == NULL)
        return false;
    
    struct ListNode *fast, *slow;
    slow = head;
    fast = head->next;

    while(slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
        if(slow == NULL || fast == NULL)
            return false;
        
        fast = fast->next;
        if(fast == NULL)
            return false;
    }

    return true;
}