/*************************************************************************
	> File Name: 24.两辆交换链表中的节点.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 17时37分59秒
 ************************************************************************/
//主要是交换，画个图就理解了
//ret 还是虚拟头结点

struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode ret, *p, *q;
    ret.next = head;
    p = &ret;
    q = head;
    while (q && q->next) {
        p->next = q->next;
        q->next = p->next->next;
        p->next->next = q;
        p = q;
        q = q->next;
    }
    return ret.next;
}
