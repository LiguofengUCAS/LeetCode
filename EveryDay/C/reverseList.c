/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *pre;
    struct ListNode *tmp;

    tmp = malloc(sizeof(struct ListNode));
    tmp->next = NULL;

    while(head != NULL)
    {
        tmp->val = head->val;
        pre = malloc(sizeof(struct ListNode));
        pre->next = tmp;
        tmp = pre;
        head = head->next;
    }
    
    return tmp->next;
}