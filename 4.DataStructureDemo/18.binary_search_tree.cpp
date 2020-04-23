/*************************************************************************
	> File Name: 18.binary_search_tree.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月21日 星期二 19时26分16秒
 ************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct Node {
    int key;
    struct Node *lchild, *rchild;
} Node;

Node *getNewNode(int key) {
    Node *p = (Node *)malloc(sizeof(Node));
    p->key = key;
    p->lchild = p->rchild = NULL;
    return p;
}

//找到前驱节点
Node *predeccessor(Node *root) {
    Node *temp = root->lchild;
    while (temp->rchild) temp = temp->rchild;
    return temp;
}

//插入操作，返回的是插入节点子树的根结点的地址
Node *insert(Node *root, int key) {
    if (root == NULL) return getNewNode(key);
    if (root->key == key) return root;
    //小于根结点的值插到左子树中
    if (root->key > key) root->lchild = insert(root->lchild, key);
    else root->rchild = insert(root->rchild, key);
    return root;
}

//删除操作，返回的是删除以后的节点地址
Node *erase(Node *root, int key) {
    if (root == NULL) return root;
    //要找的值在左子树\右子树中
    if (root->key > key) {
        root->lchild = erase(root->lchild, key);
    } else if (root->key < key){
        root->rchild = erase(root->rchild, key);
    } else {
        //删除的是根结点
        //度为０的或１的
        if (root->lchild == NULL || root->rchild == NULL) {
            Node *temp = root->lchild ? root->lchild : root->rchild;
            free(root);
            return temp;
        } else {
            //度为２的
            //找到当前节点的前驱节点
            Node *temp = predeccessor(root);
            //覆盖
            root->key = temp->key;
            //将ｔｅｍｐ给左孩子，再删除ｔｅｍｐ节点
            root->lchild = erase(root->lchild, temp->key);
        }
    }
    return root;
}

void clear(Node *root) {
    if (root == NULL) return ;
    clear(root->lchild);
    clear(root->rchild);
    free(root);
    return ;
}

void output(Node *root) {
    if (root == NULL) return ;
    output(root->lchild);
    printf("%d ", root->key);
    output(root->rchild);
    return ;
}

int main () {
    srand(time(0));
    #define Max_op 30
    Node *root = NULL;
    for (int i = 0; i < Max_op; i++) {
        int op = rand() % 2, val = rand() % 20;
        switch(op) {
            case 0: {
                printf("insert %d to binary search tree\n", val);
                root = insert(root, val);
            } break;
            case 1: {
                printf("erase %d from binary search tree\n", val);
                root = erase(root, val);
            } break;
        }
        output(root), printf("\n");
    }
    return 0;
}
