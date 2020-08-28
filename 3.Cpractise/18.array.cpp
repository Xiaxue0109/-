/*************************************************************************
	> File Name: 18.array.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月28日 星期五 09时56分36秒
 ************************************************************************/

#include <stdio.h>

int func2(int (*a)[200][300]) {
    printf("a = %p, a + 1 = %p\n", a, a + 1);
    return 0;
}

int main() {
    int arr[100][200][300];
    printf("arr[0] = %p, arr = %p\n", &arr[0], arr);
    printf("arr + 1 = %p, arr + 2 = %p \n", arr + 1, arr + 2);
    char *p = (char *)arr;
    printf("p + 1 = %p, p + 2 = %p\n", p + 1, p + 2);
    int n = 0;
    //func(&n); //&n传出参数
    //printf("%d\n", n);
    func2(arr);
    printf("arr = %lu", sizeof(arr));
    return 0;
}
