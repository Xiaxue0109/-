/*************************************************************************
	> File Name: 4.queue.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月13日 星期四 19时11分35秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Queue {
    int *data;
    int head, tail, size, count;
} Queue;

//队列初始化
Queue *init(int n) {
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->data = (int *)malloc(sizeof(int) * n);
    q->size = n;
    q->head = q->tail = q->count = 0;
    return q;
}

//判空
int empty(Queue *q) {
    return q->count == 0; 
}

int front(Queue *q) {
    if (empty(q)) return 0;
    return q->data[q->head];
}

//扩容
int expand(Queue *q) {
    int extr_size = q->size;
    int *p;
    while (extr_size) {
        p = (int *)malloc(sizeof(int) * (q->size + extr_size));
        if (p) break;
        extr_size /= 2;
    }
    if (p == NULL) return 0;
    for (int i = q->head, j = 0; j < q->count; j++) {
        p[j] = q->data[(i + j) % q->size];
    }
    
    q->size += extr_size;
    q->head = 0;
    q->tail = q->count;
    free(q->data);
    q->data = p;
    return 1;
}

//入队
int push(Queue *q, int val) {
    if (q == NULL) return 0;
    if (q->count == q->size) {
        if (!expand(q)) return 0;
        printf("expand success! size = %d\n", q->size);
    }
    q->data[q->tail++] = val;
    if (q->tail == q->size) q->tail -= q->size;
    q->count += 1;
    return 1;
}

//出队
int pop(Queue *q) {
    if (q == NULL) return 0;
    if (empty(q)) return 0;
    q->head += 1;
    if (q->head == q->size) q->head -= q->size;
    q->count -= 1;
    return 1;
}

//输出
void output(Queue *q) {
    printf("Queue(%d) = [", q->count);
    for (int i = q->head, j = 0; j < q->count; j++) {
        j && printf(", ");
        printf("%d", q->data[(i + j) % (q->size)]);
    }
    printf("]\n");
    return ;
}

//释放队列
void clear(Queue *q) {
    if (q == NULL) return ;
    free(q->data);
    free(q);
    return ;
}


int main() {
    srand(time(0));
    #define max_op 20
    int op, val;
    Queue *q = init(1);
    for (int i = 0; i < max_op; i++) {
        op = rand() % 4;
        val = rand() % 100;
        switch (op) {
            case 0:
            case 1:
            case 2: {
                printf("push %d to Queue = %d\n", val, push(q, val));
            } break;
            case 3: {
                printf("pop %d from Queue = %d\n", front(q), pop(q));
            } break;
        }
        output(q);
        printf("\n");
    }
    clear(q);
    return 0;
}
