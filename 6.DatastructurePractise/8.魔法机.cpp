/*************************************************************************
	> File Name: 8.魔法机.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月14日 星期五 17时34分26秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define ERROR 0
#define OK 1

typedef struct {
    int *data;
    int size, top;
} Stack;

void init(Stack *s, int len) {
    s->data = (int *)malloc(sizeof(int) * len);
    s->size = len;
    s->top = -1;
}

int push(Stack *s, int e) {
    if (s->top >= s->size - 1) {
        return ERROR;
    }
    s->data[++(s->top)] = e;
    return OK;
}

int empty(Stack *s) {
    return s->top == -1;
}

int pop(Stack *s) {
    if (empty(s)) {
        return ERROR;
    }
    --(s->top);
    return OK;
}

void clear(Stack *s) {
    free(s->data);
    free(s);
}

int top(Stack *s) {
    return s->data[s->top];
}

int main() {
    int n, id = 0, m;
    int flag = 1;
    scanf("%d", &n);
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    init(stack, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        while (id < m) {
            id++;
            push(stack, id);
        }
        if (empty(stack) || top(stack) != m) {
            flag = 0;
        }
        pop(stack);
    }
    printf("%s\n", flag ? "YES" : "NO");
    return 0;
}
