/*************************************************************************
	> File Name: 221.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月08日 星期六 19时30分32秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int b[100005]; //气球

struct student {
    int h, num, ans;
};

bool cmp1 (student a, student b) {
    return a.h < b.h;
}

bool cmp2 (student a, student b) {
    return a.num < b.num;
}

int main() {
    int n, m;
    student stu[100005];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].h;
        stu[i].num = i;
        stu[i].ans = 0;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(b, b + m);
    sort(stu, stu + n, cmp1);
    int t = 0;
    for (int i = 0; i < n; i++) {
        while (stu[i].h >= b[t] && t < m) {
            stu[i].ans++;
            t++;
        }
    }
    sort(stu, stu + n, cmp2);
    for (int i = 0; i < n; i++) {
        cout << stu[i].ans << endl;
    }
    return 0;
}
