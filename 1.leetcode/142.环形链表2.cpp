/*************************************************************************
	> File Name: 142.环形链表2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 18时01分15秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
   struct ListNode *p = head, *q = head;
   while (q) {
       p = p->next;
       q = q->next;
       if (q == NULL) return NULL;
       q = q->next;
       if (p == q) break;
   }
   if (q == NULL) return NULL;
   q = head;
   while (p != q) {
       p = p->next;
       q = q->next;
   }
   return p;
}
