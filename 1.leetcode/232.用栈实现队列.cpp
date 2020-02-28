/*************************************************************************
	> File Name: 234.用栈实现队列.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 18时16分10秒
 ************************************************************************/
// 用 两个栈 去拼凑 队列 的性质

typedef struct {
    int *data;
    int top;
} MyStack;

//栈的初始化
MyStack* myStackCreate(int maxSize) {
    MyStack *s = (MyStack *)malloc(sizeof(MyStack));
    s->data = (int *)malloc(sizeof(int) * maxSize);
    s->top = -1;
    return s;
}

/** Push element x to the back of queue. */
void myStackPush(MyStack* obj, int x) {
    obj->data[++(obj->top)] = x;
}

/** Removes the element from in front of queue and returns that element. */
int myStackPop(MyStack* obj) {
    return obj->data[(obj->top)--];
}

/** Get the front element. */
int myStackTop(MyStack* obj) {
   return obj->data[obj->top]; 
}

/** Returns whether the queue is empty. */
int myStackEmpty(MyStack* obj) {
    return obj->top == -1;
}

void myStackFree(MyStack* obj) {
    if (obj == NULL) return ;
    free(obj->data);
    free(obj);
}

typedef struct {
    MyStack *s1, *s2;
} MyQueue;

/** Initialize your data structure here. */
MyQueue* myQueueCreate() {
    int size = 1024;
    MyQueue *q = (MyQueue *)malloc(sizeof(MyQueue));
    q->s1 = myStackCreate(size);
    q->s2 = myStackCreate(size);
    return q;
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x) {
    myStackPush(obj->s1, x);
}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj) {
    if (myStackEmpty(obj->s2)) { //2栈是空的，就放
        while (!myStackEmpty(obj->s1)) { // 1栈不为空
            myStackPush(obj->s2, myStackPop(obj->s1)); //往第二个栈中放元素，相当于队列出队，从第一个栈中出来的栈顶元素
        }
    }
    return myStackPop(obj->s2);
}

/** Get the front element. */
int myQueuePeek(MyQueue* obj) {
    if (myStackEmpty(obj->s2)) {
        while (!myStackEmpty(obj->s1)) {
            myStackPush(obj->s2, myStackPop(obj->s1)); //往2栈压元素，从1栈中出来
        }
    }
    return myStackTop(obj->s2);
}

/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj) {
    return myStackEmpty(obj->s1) && myStackEmpty(obj->s2); 
}

void myQueueFree(MyQueue* obj) {
    if (obj == NULL) return ;
    myStackFree(obj->s1);
    myStackFree(obj->s2);
    free(obj);
    return ;
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * struct MyQueue* obj = myQueueCreate(maxSize);
 * myQueuePush(obj, x);
 * int param_2 = myQueuePop(obj);
 * int param_3 = myQueuePeek(obj);
 * bool param_4 = myQueueEmpty(obj);
 * myQueueFree(obj);
 */
