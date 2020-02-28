/*************************************************************************
	> File Name: 83.删除链表中重复元素.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 17时43分56秒
 ************************************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//主要考察就是删除节点。

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *p, *q;
    p = head;
    while (p && p->next) {
        if (p->val != p->next->val) {
            p = p->next;
        } else {
            q = p->next;
            p->next = q->next;
            free(q);
        }
    }
    return head;
}
