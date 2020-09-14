/*************************************************************************
	> File Name: 27.string.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月13日 星期日 15时19分34秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <inttypes.h>
using namespace std;

void test_sscanf() {
    char str1[] = "123 456 789 987";
    char str2[100];
    int a, b, c, d;
    //sscanf(str1, "%d%d%d%d", &a, &b, &c, &d);
    sscanf(str1, "%d%[^$]s", &a, str1);
    sscanf(str1, "%d%[^$]s", &b, str1);
    sscanf(str1, "%d%[^$]s", &c, str1);
    sscanf(str1, "%d%[^$]s", &d, str1);
    int offset = 0;
    offset += sprintf(str2 + offset, "a = %d", a);
    offset += sprintf(str2 + offset, " b = %d", b);
    offset += sprintf(str2 + offset, " c = %d", c);
    offset += sprintf(str2 + offset, " d = %d", d);
    printf("%s\n", str2);
    //printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

}

uint64_t strlen1(const char *str) {
    //const char * 不能改变值
    uint64_t i = 0;
    while (str[i]) i++;
    return i;
}

int strcmp1(const char *str1, const char *str2) {
    uint64_t i = 0;
    for (; str1[i] && str2[i]; i++) {
        if (str1[i] - str2[i]) return str1[i] - str2[i];
    }
    return str1[i] - str2[i];
}

int main() {
    int n;
    /*
    char str[100];
    while (~scanf("%d", &n)) {
        sprintf(str, "%x", n);
        printf("%s has %d digit\n", str, strlen(str));
    }
    */
    //test_sscanf();
    char str[] = "hello world";
    printf("%"PRIu64"\n", strlen1(str));
    printf("%"PRIu64"\n", strlen1("hello world"));
    cout << sizeof(str) << endl;
    return 0;
}
