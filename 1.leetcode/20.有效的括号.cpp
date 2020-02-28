/*************************************************************************
	> File Name: 20.有效的括号.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时50分47秒
 ************************************************************************/
#include <stdlib.h>
#include <string.h>

bool isValid(char * s){
    if(!s || s[0] == "") return 1;
    char* stk = (char*)malloc(strlen(s));
    int top = -1;
    int i;
    for(i = 0; s[i] != '\0'; i++){
        switch(s[i]){
            case '(':
            case '[':
            case '{':
                stk[++top] = s[i];
                break;
            case ')':
                if(top < 0 || stk[top--] != '(')
                    return 0;
                break;
            case ']':
                if(top < 0 || stk[top--] != '[')
                    return 0;
                break;
            case '}':
                if(top < 0 || stk[top--] != '{')
                    return 0;
                break;
        }
    }
    if(top >= 0)
        return 0;   
    return 1;
}
