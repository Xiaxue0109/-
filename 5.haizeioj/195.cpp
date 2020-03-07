/*************************************************************************
	> File Name: 195.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月01日 星期六 14时24分52秒
 ************************************************************************/

#include<iostream>
using namespace std;
int a[100005];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        int l = 0, r = n - 1;
        while (l != r) {
            int mid = (l + r + 1) / 2;
            if (a[mid] <= temp) l = mid;
            else r = mid - 1;
        }
        if (i) cout << " ";
        cout << a[l];
    }

    return 0;
}
