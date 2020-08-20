/*************************************************************************
	> File Name: 12.max_int.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月20日 星期四 21时21分47秒
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>

//第一个参数是参数个数，后边就是变参列表了
int max_int(int n, ...) {
    va_list arg;
    va_start(arg, n);
    int ans = INT32_MIN;
    while (n--) {
        int temp = va_arg(arg, int);
        temp > ans && (ans = temp);
    }
    va_end(arg);
    return ans;
}

int main() {
    printf("%d\n", max_int(6, 5, 7, 16, 1, 8, 99));
    //只会比较大小前边的参数个数， 后边的不会比较
    printf("%d\n", max_int(4, 5, 7, 16, 1, 8, 99));
    printf("%d\n", max_int(3, 5, 7, 16));
    printf("%d\n", max_int(5, 5, 7, 16, 1, 8));
    return 0;
}
