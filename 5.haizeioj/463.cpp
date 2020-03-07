/*************************************************************************
	> File Name: 463.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月09日 星期日 12时58分52秒
 ************************************************************************/

#include<iostream>
using namespace std;

struct windows {
    int left, right, top, end;
};

int main() {
    windows w[5];
    int ans = 0;
    for (int i = 0; i < 2; i++) {
        cin >> w[i].left >> w[i].right
            >> w[i].top >> w[i].end; 
    }
    for (int i = 0; i < 1; i++) {
        if (w[i].right < w[i + 1].left && w[i].end < w[i + 1].top) {
            ans = 0;
        }
        //if (w[i].right > w[i + 1].left || w[i].end > w[i + 1].top) 
        else {
            ans = (w[i].right - w[i + 1].left) *
                  (w[i].end - w[i + 1].top);
        }
    }
    cout << ans << endl;
    return 0;
}
