/*************************************************************************
	> File Name: 13.堆新玩具.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月19日 星期三 17时10分15秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define swap(a, b) {\
    __typeof(a) __temp = (a);\
    (a) = (b); (b) = __temp;\
}

typedef struct Heap {
    double *data;
    int size, length;
} Heap;

void init(Heap *h, int n) {
    h->data = (double *)malloc(sizeof(double) * n);
    h->length = n;
    h->size = 0;
}

void push(Heap *h, double value) {
    if (h->size == h->length) return ;
    h->data[h->size] = value;
    int ind, f;
    ind = h->size;
    f = (ind - 1) / 2;
    while (h->data[ind] > h->data[f]) {
        swap(h->data[ind], h->data[f]);
        ind = f;
        f = (ind - 1) / 2;
    }
    h->size++;
}

void update(Heap *h, int i, int n) {
    int l, r, m;
    l = i * 2 + 1;
    r = i * 2 + 2;
    m = i;
    if (l < n && h->data[l] > h->data[m]) m = l;
    if (r < n && h->data[r] > h->data[m]) m = r;
    if (m != i) {
        swap(h->data[m], h->data[i]);
        update(h, m, n);
    }
}

double top(Heap *h) {
    return h->data[0];
}

void pop(Heap *h) {
    if (h->size == 0) return ;
    h->size --;
    swap(h->data[0], h->data[h->size]);
    update(h, 0, h->size);
}

void clear(Heap *h) {
    free(h->data);
    free(h);
}

int main() {
    int n, ans = 0;
    double a, b, new_value;
    scanf("%d", &n);
    Heap *h = (Heap *)malloc(sizeof(Heap));
    init(h, n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a);
        push(h, a);
    }
    for (int i = 1; i < n; i++) {
        a = top(h); pop(h);
        b = top(h); pop(h);
        new_value = pow(a, 1.0 / 3.0) * pow(b, 2.0 / 3.0);
        push(h, new_value);
    }
    printf("%lf\n", top(h));
    clear(h);
    return 0;
}
