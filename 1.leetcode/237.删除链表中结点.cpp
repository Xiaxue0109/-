/*************************************************************************
	> File Name: 237.删除链表中结点.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 15时13分17秒
 ************************************************************************/

//此题是删除结点，已知要删除的一个节点，正常应该找到
//前一个结点的next域去改变，而现在不知道， 办法如下：
// 将后边结点的值 给 待删除结点,这样不会改变链的链接
// 关系，也删除了结点

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *p = node->next;
    node->val = p->val;
    node->next = p->next;
    free(p);
    return ;
}
