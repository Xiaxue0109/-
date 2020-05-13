/*************************************************************************
	> File Name: 508.过河.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月13日 星期三 19时08分38秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n, num[1005], ans;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    for (int i = n - 1; i >= 0; i -= 2) {
        if (i == 0) {
            //剩一个人
            ans += num[0];
            break;
        }
        if (i == 1) {
            //剩两人
            ans += num[1];
            break;
        }
        if (i == 2) {
            //剩三个人
            ans += num[0] + num[1] + num[2];
            break;
        }
        //剩四个人以上
        // 1.最快+次快；最快回；最慢+次慢；次快回；  这种是过河快
        // 2.最慢+最快；最快回；次慢+最快；最快回；  这种是手电筒快
        ans += min(num[1] + num[0] + num[i] + num[1], num[i] + num[0] + num[i - 1] + num[0]);
    }
    cout << ans << endl;
    return 0;
}
