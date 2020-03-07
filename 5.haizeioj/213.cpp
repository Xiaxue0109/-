/*************************************************************************
	> File Name: 213.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月29日 星期三 17时29分20秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, a[35];
    int b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
        if (a[i] == 100) b += 1;
        else if (a[i] >= 90) c += 1;
        else if (a[i] >= 80) d += 1;
        else if (a[i] >= 70) e += 1;
        else if (a[i] >= 60) f += 1;
        else g += 1;
    }
    cout << b << " " << c << " " << d << " " << e << " " << f << " " << g << endl;
    return 0;
}
