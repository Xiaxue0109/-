/*************************************************************************
	> File Name: 19.删除链表的倒数第n个节点.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 17时29分13秒
 ************************************************************************/

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode ret, *p, *q;
    ret.next= head;
    p = q = &ret;
    while (n--) {
        q = q->next;
    }
    q = q->next;
    while (q) {
        p = p->next;
        q = q->next;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    return ret.next;
}
