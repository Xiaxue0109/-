/*************************************************************************
	> File Name: 7.回文判断.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月14日 星期五 17时25分49秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *buffer = (char *)malloc(22);
    int len = strlen(buffer);
    scanf("%s", buffer);
    int i = 0, j = strlen(buffer) - 2;
    int flag = 1;
    while (i < j && flag) {
        if (buffer[i] != buffer[j]) {
            flag = 0;
        }
        i++;
        j--;
    }
    printf("%s\n", flag ? "true" : "false");
    free(buffer);
    return 0;
}
