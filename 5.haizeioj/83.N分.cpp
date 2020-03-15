/*************************************************************************
	> File Name: 83.N分.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月11日 星期三 09时59分40秒
 ************************************************************************/

#include<iostream>
using namespace std;

int f(int s, int num, int cnt) {
    int ans = 0;
    if (cnt == 0) {
        if (num == 0) return 1;
        return 0;
    }
    for (int i = s; i <= num; i++) {
        ans += f(i, num - i, cnt - 1);
    }
    return ans;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", f(1, n, m));
    return 0;
}
