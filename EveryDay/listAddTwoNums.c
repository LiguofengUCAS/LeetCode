/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int    carry = 0;
    int    origin;
    struct ListNode* current_1;
    struct ListNode* current_2;
    struct ListNode* result;
    struct ListNode* pre;
    struct ListNode* tmp;

    current_1 = l1;
    current_2 = l2;
    result    = malloc(sizeof(struct ListNode));
    pre       = result;
    
    while(current_1 != NULL || current_2 != NULL)
    {
        tmp = malloc(sizeof(struct ListNode));

        if(current_1 != NULL && current_2 != NULL)
        {
            origin = carry + current_1->val + current_2->val;
            tmp->val = origin % 10;
            tmp->next = NULL;
            pre->next = tmp;
            carry = origin / 10;
            pre = tmp;
            current_1 = current_1->next;
            current_2 = current_2->next;
        }
        else if(current_1 != NULL && current_2 == NULL)
        {
            origin = carry + current_1->val;
            tmp->val = origin % 10;
            tmp->next = NULL;
            pre->next = tmp;
            carry = origin / 10;
            pre = tmp;
            current_1 = current_1->next;
        }
        else if(current_1 == NULL && current_2 != NULL)
        {
            origin = carry + current_2->val;
            tmp->val = origin % 10;
            tmp->next = NULL;
            pre->next = tmp;
            carry = origin / 10;
            pre = tmp;
            current_2 = current_2->next;
        }
    }

    if(carry == 1)
    {
        tmp = malloc(sizeof(struct ListNode));
        tmp->val = 1;
        tmp->next = NULL;
        pre->next = tmp;
    }

    return result->next;
}