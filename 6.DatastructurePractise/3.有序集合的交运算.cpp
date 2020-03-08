/*************************************************************************
	> File Name: 3.有序集合的交运算.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月13日 星期四 12时11分51秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ERROR 0
#define OK 1

typedef struct {
    int size, length;
    int *data;
} Vector;

int init (Vector *vec, int size) {
    vec->size = size;
    vec->length = 0;
    vec->data = (int *)malloc(sizeof(int) * size);
    if (vec->data == NULL) {
        return ERROR;
    }
    return OK;
}

void expand(Vector *vec) {
    vec->size *= 2;
    int *old_data = vec->data;
    vec->data = (int *)malloc(sizeof(int) * vec->size);
    for (int i = 0; i < vec->length; i++) {
        vec->data[i] = old_data[i];
    }
    free(old_data);
    return ;
}

int insert(Vector *vec, int loc, int value) {
    if (loc < 0 || loc > vec->length) {
        return ERROR;
    }
    if (vec->size == vec->length) {
        expand(vec);
    }
    for (int i = vec->length; i > loc; i--) {
        vec->data[i] = vec->data[i - 1];
    }
    vec->data[loc] = value;
    vec->length += 1;
    return OK;
}

void output(Vector *vec) {
    printf("%d\n", vec->length);
    if (vec->length) {
        printf("%d", vec->data[0]);
    }
    for (int i = 1; i < vec->length; i++) {
        printf(" %d", vec->data[i]);
    }
    printf("\n");
    return ;
}

void merge(Vector *v1, Vector *v2, Vector *v3) {
    int i = 0, j = 0, k = 0;
    while (i < v1->length && j < v2->length) {
        if (v1->data[i] < v2->data[j]) {
            i++;
        } else if (v1->data[i] > v2->data[j]) {
            j++;
        } else {
            insert(v3, k++, v1->data[i]);
            i++, j++;
        }
    }
}

void clear(Vector *vec) {
    free(vec->data);
    free(vec);
}

int main() {
    int n, x;
    Vector *vec1 = (Vector *)malloc(sizeof(Vector));
    Vector *vec2 = (Vector *)malloc(sizeof(Vector));
    Vector *vec3 = (Vector *)malloc(sizeof(Vector));
    scanf("%d", &n);
    init(vec1, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        insert(vec1, i, x);
    }
    scanf("%d", &n);
    init(vec2, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        insert(vec2, i, x);
    }
    init(vec3, vec1->size + vec2->size);
    merge(vec1, vec2, vec3);
    output(vec3);
    clear(vec1);
    clear(vec2);
    clear(vec3);
    return 0;
}
