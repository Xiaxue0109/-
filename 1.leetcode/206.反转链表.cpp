/*************************************************************************
	> File Name: 206.反转链表.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 14时17分44秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//反转链表，主要是用头插法，将要插入后边的链连接到ret
//节点后边，再插入元素。

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode ret, *p = head, *q;
    ret.next = NULL;
    while (p) {
        q = p->next;
        p->next = ret.next;//精华
        ret.next = p;//精华
        p = q;
    }
    return ret.next;
}
