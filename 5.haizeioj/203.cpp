/*************************************************************************
	> File Name: 203.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月30日 星期四 11时13分39秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int m, n, max = 0, sum = 0, a[15][15], num[105], cnt = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            num[cnt] = a[i][j];
            cnt++;
        }
    }
    for (int i = 0; i < n; i++) {
        max = a[0][i];
        for (int j = 1; j < m; j++) {
            if (max < a[j][i]) max = a[j][i];
        }
        cout << max << endl;
    }
    sort(num, num + cnt, cmp);
    for (int i = 0; i < cnt; i++) {
        if (i) cout << " ";
        cout << num[i];
        sum += num[i];
    }
    cout << endl;
    int arv = round(1.0 * sum / cnt);
    cout << arv << endl;
    int t = 0;
    for (int i = 0; i < cnt; i++) {
        if (num[i] >= arv) t++;
    }
    cout << t << endl;
    return 0;
}
