/*************************************************************************
	> File Name: 1.顺序表循环左移.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月13日 星期四 10时41分17秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define ERROR 0
#define OK 1

typedef struct {
    int size, length;
    int *data;
} Vector;

int init(Vector *vec, int size) {
    vec->size = size;
    vec->length = 0;
    vec->data = (int *)malloc(sizeof(int) * size);
    if (vec->data == NULL) {
        return ERROR;
    }
    return OK;
}

void expend (Vector *vec) {
    int *old_data = vec->data;
    vec->size *= 2;
    vec->data = (int *)malloc(sizeof(int) * vec->size);
    for (int i = 0; i < vec->length; i++) {
        vec->data[i] = old_data[i];
    }
    free(old_data);
    return ;
}

int insert (Vector *vec, int loc, int value) {
    if (loc < 0 || loc > vec->length) {
        return ERROR;
    }
    if (vec->length == vec->size) {
        expend(vec);
    }
    for (int i = vec->length; i > loc; i--) {
        vec->data[i] = vec->data[i - 1];
    }
    vec->data[loc] = value;
    vec->length += 1;
    return OK;
}

int reverse(Vector *vec, int begin, int end) {
    int temp;
    while (begin < end) {
        temp = vec->data[begin];
        vec->data[begin] = vec->data[end];
        vec->data[end] = temp;
        begin++;
        end--;
    }
    return OK;
}

void output(Vector *vec) {
    if (vec->length) {
        printf("%d", vec->data[0]);
    }
    for (int i = 1; i < vec->length; i++) {
        printf(" %d", vec->data[i]);
    }
    printf("\n");
}

void clear(Vector *vec) {
    free(vec->data);
    free(vec);
}

int main() {
    int n, k, a;
    Vector *vec = (Vector *)malloc(sizeof(Vector));
    scanf("%d %d", &n, &k);
    init(vec, n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        insert(vec, i - 1, a);
    }
    reverse(vec, 0, k - 1);
    reverse(vec, k, n - 1);
    reverse(vec, 0, n - 1);
    output(vec);
    clear(vec);
    return 0;
}
