/*************************************************************************
	> File Name: 1.Vector.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月11日 星期二 14时52分00秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//结构类型定义成Vector
typedef struct Vector {
    int *data;
    int size, length;
} Vector;

//结构操作
Vector *init(int n) {
    Vector *vec = (Vector * )malloc(sizeof(Vector));
    vec->data = (int *)malloc(sizeof(int) * n);
    vec->size = n;
    vec->length = 0;
    return vec;
}

//插入的扩容
int expand(Vector *vec) {
    //vec->size *= 2;
    //vec->data = (int *)realloc(vec->data, sizeof(int) * vec->size);
    //return 1;

    //无bug的
    int extr_size = vec->size;
    int *p;
    while (extr_size) {
        p = (int *)realloc(vec->data, sizeof(int) * (vec->size + extr_size));
        if (p) break;
        extr_size /= 2;
    }
    if (p == NULL) return 0;
    vec->data = p;
    vec->size += extr_size;
    return 1;
}


//插入元素
int insert(Vector *vec, int ind, int val) {
    if (vec == NULL) return 0;
    if (ind < 0 || ind > vec->length) return 0;
    if (vec->length == vec->size) {//return 0;//满了
        if (!expand(vec)) return 0;
        printf("expand successfully ! size = %d\n", vec->size);
    }
    for (int i = vec->length; i > ind; i--) {
        vec->data[i] = vec->data[i - 1];
    }
    vec->data[ind] = val;
    vec->length += 1;
    return 1;
}

//删除元素
int erase(Vector *vec, int ind) {
    if (vec == NULL) return 0;
    if (ind < 0 || ind >= vec->length) return 0;
    for (int i = ind + 1; i < vec->length; i++) {
        vec->data[i - 1] = vec->data[i];
    }
    vec->length -= 1;
    return 1;
}

//输出打印
void output(Vector *vec) {
    printf("Vector(%d) = [", vec->length);
    for (int i = 0; i < vec->length; i++) {
        if (i) printf(", ");
        printf("%d", vec->data[i]);
    }
    printf("]\n");
    return ;
}

//清空操作
void clear (Vector *vec) {
    if (vec == NULL) return ;
    free(vec->data);
    free(vec);
    return ;
}

int main() {
    srand(time(0));
    #define max_op 20
    Vector *vec = init(1);
    //Vector *vec = init(1); 扩容用的
    int op, ind, val;
    for (int i = 0; i < max_op; i++) {
        op = rand() % 4;
        ind = rand() % (vec->length + 1);
        val = rand() % 100;
        switch (op) {
            case 0: 
            case 1:
            case 2: {
                printf("insert %d at %d to Vector = %d\n", val, ind, insert(vec, ind, val));
            } break;
            case 3: {
                printf("erase item at %d from Vector = %d\n", ind, erase(vec, ind));
            } break;
        }
        output(vec);
        printf("\n");
    }
    clear(vec);
    return 0;
}
