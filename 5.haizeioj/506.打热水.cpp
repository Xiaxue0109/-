/*************************************************************************
	> File Name: 506.打热水.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月13日 星期三 18时25分47秒
 ************************************************************************/
//让用时少的在前边打水
#include <iostream>
#include <algorithm>
using namespace std;

struct node{
    int time, num;
};

bool cmp(node a, node b) {
    return a.time < b.time;
}

int n;
node s[35];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i].time;
        s[i].num = i + 1;
    }
    sort(s, s + n, cmp);
    int ans = 0, now = 0;
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << s[i].num;
        ans += now;
        now += s[i].time;
    }
    printf("\n%.2f\n", (double)ans / n);
    return 0;
}
