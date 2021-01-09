/*************************************************************************
	> File Name: 37.stack.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2021年01月09日 星期六 16时30分52秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Queue {
    int *data;
    int head, tail, size, cnt;
} Queue;

Queue *init(int n) {
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->data = (int *)malloc(sizeof(int) * n);
    q->head = q->tail = q->cnt = 0;
    q->size = n;
    return q;
}

int empty(Queue *q) {
    return q->cnt == 0;
}

int front(Queue *q) {
    return q->data[q->head];
}

//入队的时候 先增加元素再修改指针位置和个数
int push(Queue *q, int val) {
    if (q == NULL) return 0;
    if (q->cnt == q->size) return 0;
    q->data[q->tail++] = val;
    if (q->tail == q->size) q->tail -= q->size;
    q->cnt += 1;
    return 1;
}

//出队的时候要判空
int pop(Queue *q) {
    if (q == NULL) return 0;
    if (empty(q)) return 0;
    q->head += 1;
    if (q->head == q->size) q->head -= q->size;
    q->cnt -= 1;
    return 1;
}

void output(Queue *q) {
    printf("Queue(%d) = [", q->cnt);
    for (int i = q->head, j = 0; j < q->cnt; j++) {
        j && printf(", ");
        printf("%d", q->data[(i + j) % q->size]);
    }
    printf("]\n");
    return ;
}

void clear(Queue *q) {
    if (q == NULL) return ;
    free(q->data);
    free(q);
    return ;
}

int main() {
    srand(time(0));
    #define max_op 20
    Queue *q = init(10);
    int op, val;
    for (int i = 0; i < max_op; i++) {
        op = rand() % 4;
        val = rand() % 100;
        switch(op) {
            case 0:
            case 1:
            case 2: {
                printf("push %d to queue = %d\n", val, push(q, val));
            } break;
            case 3: {
                printf("pop %d from queue", front(q));
                printf(" = %d\n", pop(q));
            } break;
        }
        output(q);
        printf("\n");
    }
    clear(q);
    return 0;
}
