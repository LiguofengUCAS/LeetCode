/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/* No.160 */

/* 
** 通过循环遍历链表消除长度差 
** 如果是交叉链表，最终指针必会相遇
*/
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p, *q;
    p = headA;
    q = headB;
    
    while(p != q)
    {
        p = p == NULL ? headB : p->next;
        q = q == NULL ? headA : q->next;
    }
    
    return p;
}