/*************************************************************************
	> File Name: 5.输出最长字符串.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月04日 星期三 17时15分50秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
int main() {
    int n, len;
    char str[101], long_str[101];
  	scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int j = 0;
        while (scanf("%c", &str[j]) != EOF) {
            if (str[j++] == '\n') {
                str[j] = '\0';
                break;
            }
        }
        if (strlen(str) > len) {
            strcpy(long_str, str);
            len = strlen(str);
        }
    }
    printf("%s\n", long_str);
    return 0;
}

