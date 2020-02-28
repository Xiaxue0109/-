/*************************************************************************
	> File Name: 234.回文链表.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 14时36分16秒
 ************************************************************************/

/*回文链表的主要思想：
	1. 不能增加数组链表之类的，要求空间复杂度O(1)
	2. 将原链表分成两部分，前一半正常，后一半是反转过来的
	3. 两部分依次对比，碰到不相同就返回false,否则返回true
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//获取链表的长度
int get_length(struct ListNode *head) {
    int n = 0;
    while (head) n += 1, head = head->next;
    return n;
}

// 获取要反转的部分
struct ListNode *get_node(struct ListNode *head, int ind) {
    while (ind--) head = head->next;
    return head;
}

//反转
struct ListNode *reserve(struct ListNode *head) {
    struct ListNode ret, *p = head, *q;
    ret.next = NULL;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}

// 判断是否是回文链表
bool isPalindrome(struct ListNode* head){
    int len = get_length(head);
    struct ListNode *p = head, *q = reserve(get_node(head, (len + 1) / 2));
    while (q) {
        if (p->val != q->val) return false;
        p = p->next;
        q = q->next;
    }
    return true;
}
