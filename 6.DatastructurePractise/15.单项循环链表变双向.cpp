/*************************************************************************
	> File Name: 15.单项循环链表变双向.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月19日 星期三 22时21分51秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prior;
}Node, *LinkList;

Node insert(LinkList head, int index, int value) {
    Node *p, ret;
    int raw_index = index, len = 0;
    p = head;
    ret.data = 0;
    while (p && index) {
        p = p->next;
        --index;
        ++len;
        if (p == head) break;
    }
    if (index == 0) {
        Node *node = (Node *)malloc(sizeof(Node));
        node->data = value;
        node->next = node;
        if (p != NULL) {
            node->next = p->next;
            p->next = node;
        }
        node->prior = NULL;
        if (p == head && len == raw_index) {
            head = node;
        }
        ret.data = 1;
    }
    ret.next = head;
    return ret;
}

LinkList build(LinkList head) {
    Node *p, *q;
    if (head == NULL) {
        return head;
    }
    p = head;
    q= head->next;
    do {
        q->prior = p;
        p = p->next;
        q = q->next;
    } while (q != head->next);
    return head;
}

void output(LinkList head, int m) {
    int len = 0;
    Node *p = head, *q;
    while (p->data != m) {
        p = p->next;
    }
    q = p;
    printf("%d", p->data);
    p = p->prior;
    while (p != q) {
        printf(" %d", p->data);
        p = p->prior;
    }
    printf("\n");
    return ;
}

void clear(LinkList head) {
    Node *p, *q;
    if (head == NULL)  {
        return ;
    }
    p = head->next;
    head->next = NULL;
    while (p) {
        q = p->next;
        free(p);
        p = q;
    }
    return ;
}

int main() {
    LinkList linklist = NULL;
    Node ret;
    int n, m, num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        ret = insert(linklist, i, num);
        if (ret.data == 0) {
            printf("ERROR\n");
            return 1;
        }
        linklist = ret.next;
    }
    linklist = build(linklist);
    scanf("%d", &m);
    output(linklist, m);
    clear(linklist);
    return 0;
}
