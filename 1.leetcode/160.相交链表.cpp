/*************************************************************************
	> File Name: 160.相交链表.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 17时54分52秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p = headA, *q = headB;
    while (p != q) {
        p = p ? p->next : headA;
        q = q ? q->next : headB; 
    }
    return p;
}
