/*************************************************************************
	> File Name: 16.my_printf.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年08月25日 星期二 14时35分56秒
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>

int reverse_num(int num, int *temp) {
    int digit = 0;
    do {
        *temp = *temp * 10 + num % 10;
        num /= 10;
        digit += 1;
    } while (num);
    return digit;
}

int output_num(int temp, int digit) {
    int cnt = 0;
    while (digit--) {
        putchar(temp % 10 + '0');
        temp /= 10;
        cnt += 1;
    }
    return cnt;
}


// frm是格式
int my_printf(const char *frm, ...) {
    int cnt = 0;
#define PUTC(a) putchar(a), cnt++;
    va_list arg;
    va_start(arg, frm);
    for (int i = 0; frm[i]; i++) {
        switch (frm[i]) {
            case '%': {
                switch (frm[++i]) {
                    case 'd': {
                        int xx = va_arg(arg, int);
                        uint32_t x;
                        if (xx < 0)  { PUTC('-'); x = -xx; }
                        else x = xx;
                        int num1 = x / 100000, num2 = x % 100000;
                        int temp1 = 0, temp2 = 0;
                        int digit1 = reverse_num(num1, &temp1);
                        int digit2 = reverse_num(num2, &temp2);
                        if (num1) digit2 = 5;
                        else digit1 = 0;
                        cnt += output_num(temp1, digit1);
                        cnt += output_num(temp2, digit2);
                        
                    } break;
                    case '%': {
                        PUTC(frm[i]);
                    } break;
                    case 's': {
                        const char *str = va_arg(arg, const char *);
                        for (int i = 0; str[i]; i++) {
                            PUTC(str[i]);
                        }
                    } break;
                }
            } break;
            default: PUTC(frm[i]); break;
        }
    }
    #undef PUTC
    return cnt;
}

int main() {
    int a = 0, b = 123, c = 1000, d = -456;
    my_printf("hello xx\n");
    my_printf("int (a) = %d\n", a);
    my_printf("int (b) = %d\n", b);
    my_printf("int (c) = %d\n", c);
    my_printf("int (d) = %d\n", d);
    printf("INT32_MAX = %d\n", INT32_MAX);
    my_printf("INT32_MAX = %d\n", INT32_MAX);
    printf("INT32_MIN = %d\n", INT32_MIN);
    my_printf("INT32_MIN = %d\n", INT32_MIN);
    char str[100] = "I love study!";
    printf("%s\n", str);
    my_printf("%s\n", str);
    return 0;
}
