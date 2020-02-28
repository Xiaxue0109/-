/*************************************************************************
	> File Name: 19.删除链表的倒数第n个节点.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 17时29分13秒
 ************************************************************************/

//删除链表的倒数第n个节点的主要思路如下：
//先将p,q 都指向ret，将p和q的距离变成n,q 再走一步，
//再将p和q同时往后移，q！= NULL，时候，将q 变成p->next
//在连接，删除就OK了

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode ret, *p, *q;
    ret.next= head;
    p = q = &ret;
    while (n--) {
        q = q->next;
    }
    q = q->next;// 重点，再走一步
    while (q) {
        p = p->next;
        q = q->next;
    }
    q = p->next;
    p->next = q->next;//p->next = p->next->next;都一样
    free(q);
    return ret.next;
}
