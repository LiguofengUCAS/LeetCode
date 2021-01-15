/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*solution 1*/
/*check whether p is the nth node from the bottom*/
int checkPlace(struct ListNode *p, int n)
{
    int i;
    struct ListNode * tmp;

    tmp = p;
    for(i = 0; i < n; i++)
        tmp = tmp->next;

    if(tmp == NULL)
        return 1;
    else
        return 0;
}

struct ListNode* removeNthFromEnd_1(struct ListNode* head, int n){
    struct ListNode *current, *pre;

    current = head;
    pre = malloc(sizeof(struct ListNode));
    pre->next = head;
    
    while(!checkPlace(current, n))
    {
        current = current->next;
        pre = pre->next;
    }
    if(pre->next == head)
        head = head->next;

    pre->next = current->next;
    return head;
}

/*sulution 2*/
/*only scan once*/
struct ListNode* removeNthFromEnd_2(struct ListNode* head, int n){
    struct ListNode *current, *forward, *pre, *res;
    int i;

    forward = head;
    pre = malloc(sizeof(struct ListNode));
    pre->next = head;
    current = pre;

    for(i = 0; i < n; i++)
        forward = forward->next;

    while(forward != NULL)
    {
        current = current->next;
        forward = forward->next;
    }

    current->next = current->next->next;
    res = pre->next;
    free(pre);
    return res;
}