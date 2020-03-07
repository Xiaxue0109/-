/*************************************************************************
	> File Name: 176.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月17日 星期五 17时55分40秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;


int main() {
    int cnt = 0;
    char a[1005] = {0};
    char b[1005] = {0};
    gets(a);
    gets(b);
    int len1 = strlen(a);
    int len2 = strlen(b);
    for (int i = 0; i < len1; i++) {
        if (strncmp(b, &a[i], len2) == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
