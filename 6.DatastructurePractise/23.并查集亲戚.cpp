/*************************************************************************
	> File Name: 23.并查集亲戚.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月24日 星期一 13时57分05秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct DisjoinSet{
    int *father;
    int *rank;
}DisjoinSet;

void init(DisjoinSet *s, int size) {
    s->father = (int *)malloc(sizeof(int) * size);
    s->rank = (int *)malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++) {
        s->father[i] = i;
        s->rank[i] = 1;
    }
    return ;
}

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int max(int a, int b){
    return a > b ? a : b;
}

int find_set(DisjoinSet *s, int node) {
    if (s->father[node] != node) {
        s->father[node] = find_set(s, s->father[node]);
    }
    return s->father[node];
}

int merge(DisjoinSet *s, int node1, int node2) {
    int f1 = find_set(s, node1);
    int f2 = find_set(s, node2);
    if (f1 != f2) {
        if (s->rank[f1] > s->rank[f2]) {
            swap(&f1, &f2);
        }
        s->father[f1] = f2;
        s->rank[f2] = max(s->rank[f1] + 1, s->rank[f2]);
        return 1;
    }
    return 0;
}

void clear(DisjoinSet *s) {
    if(!s) return ;
    free(s->father);
    free(s->rank);
    free(s);
}

int main() {
    DisjoinSet *s = (DisjoinSet *)malloc(sizeof(DisjoinSet));
    int m, n, p, a, b;
    scanf("%d%d%d", &n, &m, &p);
    init(s, n + 1);
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &a, &b);
        merge(s, a, b);
    }
    for (int i = 0; i < p; i++) {
        scanf("%d%d", &a, &b);
        if (find_set(s, a) == find_set(s, b)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
