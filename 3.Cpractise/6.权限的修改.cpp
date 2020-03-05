/*************************************************************************
	> File Name: 6.权限的修改.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月05日 星期四 22时47分28秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>

int get_str(char str) {
    switch (str) {
        case 'r': return 4;
        case 'w': return 2;
        case 'x': return 1;
    }
    return 0;
}
int main() {
	int len, sum = 0;
    char str[10];
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len; i++) {
        sum += get_str(str[i]);
    }
    while (scanf("%s", str) != EOF) {
        switch(str[0]) {
            case '+': sum += get_str(str[1]); break;
            case '-': sum -= get_str(str[1]); break;
        }
    }
    printf("%d\n", sum);
    return 0;
}
