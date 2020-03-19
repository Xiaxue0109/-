/*************************************************************************
	> File Name: 534.体积.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月18日 星期三 20时29分11秒
 ************************************************************************/

#include <iostream>
using namespace std;

//check数组是去重的
int n, num[25], check[1005] = {1}, ans;

void func(int s, int sum) { 
    //sum -> 到这为止选的数加一起的和是多少
    if (check[sum] == 0) {
        ans++;
        check[sum] = 1;
    }
    for (int i = s; i <= n; i++) {
        sum += num[i];
        func(i + 1, sum);
        sum -= num[i];
    }
}

int main () {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    func(0, 0);
    cout << ans << endl;
    return 0;
}
