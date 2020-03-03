/*************************************************************************
	> File Name: 3.字典序排序名单.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月03日 星期二 17时34分08秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
char names[10][21];
int main() {
	int m;
    for (int i = 0; i < 10; i++) {
        scanf("%s", names[i]);
    }
    char temp[21];
    for (int i = 0; i < 10; i++) {
        m = i;
        for (int j = i + 1; j < 10; j++) {
            if (strcmp(names[m], names[j]) > 0) {
                m = j;
            //strcmp > 0 则str1 > str2;
            }
        }
        strcpy(temp, names[i]);
        strcpy(names[i], names[m]);
        strcpy(names[m], temp);
    }
    for (int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
