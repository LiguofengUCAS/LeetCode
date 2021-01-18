/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/* No.234 */

#define MAX 50000

bool isPalindrome(struct ListNode* head){
    int array[MAX];
    int i = 0, j = 0;

    while(head != NULL)
    {
        array[j] = head->val;
        j++;
        head = head->next;
    }
    j--;

    while(i <= j)
    {
        if(array[i] == array[j])
        {
            i++;
            j--;
        }
        else
            return false;
    }

    return true;
}