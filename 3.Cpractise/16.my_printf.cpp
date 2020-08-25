/*************************************************************************
	> File Name: 16.my_printf.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月25日 星期二 14时35分56秒
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>

#define PUTC(a) putchar(a), cnt++;

// frm是格式
int my_printf(const char *frm, ...) {
    int cnt = 0;
    va_list arg;
    va_start(arg, frm);
    for (int i = 0; frm[i]; i++) {
        switch (frm[i]) {
            case '%': {
                switch (frm[++i]) {
                    case 'd': {
                        int x = va_arg(arg, int), temp = 0, digit = 0;
                        if (x < 0) { 
                            PUTC('-'); 
                            x = -x; 
                        }
                        do {
                            temp = temp * 10 + x % 10;
                            x /= 10;
                            digit++;
                        } while (x);
                        while (digit--) {
                            PUTC(temp % 10 + '0');
                            temp /= 10;
                        }
                    } break;
                    case '%': {
                        PUTC(frm[i]);
                    } break;
                }
            } break;
            default: PUTC(frm[i]); break;
        }
    }
    return cnt;
}

int main() {
    int a = 0, b = 123, c = 1000, d = -456;
    my_printf("hello xx\n");
    my_printf("int (a) = %d\n", a);
    my_printf("int (b) = %d\n", b);
    my_printf("int (c) = %d\n", c);
    my_printf("int (d) = %d\n", d);
    return 0;
}
