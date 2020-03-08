/*************************************************************************
	> File Name: 10.二叉树.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月17日 星期一 17时12分09秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char data;
    struct Node *lchild, *rchild;
} Node;

typedef struct Tree {
    int *root;
    int n;
} Tree;

Node *init(char data) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->lchild = node->rchild = NULL;
    return node;
}

Node *build(char *pre_str, char *in_str, int len) {
    Node *p = init(pre_str[0]);
    int pos = strchr(in_str, pre_str[0]) - in_str;
    if (pos > 0) {
        p->lchild = build(pre_str + 1, in_str, pos);
    }
    if (len - pos - 1 > 0) {
        p->rchild = build(pre_str + pos + 1, in_str + pos + 1, len - pos - 1);
    }
    return p;
}

void postorder1(Node *node) {
    if (node->lchild) {
        postorder1(node->lchild);
    }
    if (node->rchild) {
        postorder1(node->rchild);
    }
    printf("%c", node->data);
}

void postorder2(Node *node) {
    if (node->rchild) {
        postorder2(node->rchild);
    }
    if (node->lchild) {
        postorder2(node->lchild);
    }
    printf("%c", node->data);
}

int main() {
    char *pre_str, *in_str;
    pre_str = (char *)malloc(51);
    in_str = (char *)malloc(51);
    scanf("%s%s", pre_str, in_str);
    Node *root = build(pre_str, in_str, strlen(pre_str));
    postorder1(root);
    printf("\n");
    postorder2(root);
    printf("\n");

    return 0;
}
