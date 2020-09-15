/*************************************************************************
	> File Name: 24.fib.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月15日 星期二 14时31分26秒
 ************************************************************************/

#include <iostream>
using namespace std;

/*斐波那契数列求和
 * 1. 不能用递归去求解，递归层数太多，容易溢出
 * 2. 需要用循环的方式去求解！！！
 * 
 */

class Solution {
public:
    int fib(int n) {
        int temp = 1000000007;
        if (n == 0) return 0;
        if (n == 1) return 1;
        int first = 0, second = 1, sum;
        for (int i = 1; i <= n; i++) {
            sum = (first + second) % temp;
            first = second % temp;
            second = sum % temp;
        }
        return first;
    }
};
