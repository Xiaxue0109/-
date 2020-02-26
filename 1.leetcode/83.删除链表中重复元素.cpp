/*************************************************************************
	> File Name: 83.删除链表中重复元素.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 17时43分56秒
 ************************************************************************/

struct ListNode LNode, *LinkList;

struct ListNode* deleteDuplicates(struct ListNode* head){
    if ( head == NULL )
    {
        return head;
    }
    
    LinkList cur = head->next;
    LinkList pre = head;
    
    while ( cur )
    {
        while ( cur && cur->val == pre->val)
        {
            cur = cur->next;
        }
        
        pre->next = cur;
        
        if ( cur )
        {
            cur = cur->next;
            pre = pre->next;
        }
    }
    
    return head;
}
