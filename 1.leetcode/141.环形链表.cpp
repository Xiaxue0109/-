/*************************************************************************
	> File Name: 141.环形链表.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 17时47分47秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//主要是考察快慢指针问题（追击问题），快的先为NULL说明没有环，若有环快慢指针会在某一点相遇。

bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head, *low = head;
    if (head == NULL) {
        return false;
    }
    do {
        low = low->next;
        fast = fast->next;
        if (fast == NULL || fast->next == NULL) return false;
        fast = fast->next;
    } while (fast != low);
    return true;
}
