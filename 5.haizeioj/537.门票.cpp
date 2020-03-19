/*************************************************************************
	> File Name: 537.门票.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月18日 星期三 20时47分20秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int l, c, ans_cnt, fu, yu, cnt;
char let[30];
char ans[30];

int func(int s, int left) {
    if (left == 0) {
        //符合要求输出，结束
        if (yu >= 1 && fu >= 2) {
            for (int i = 0; i < ans_cnt; i++) {
                cout << ans[i];
            }
            cout << endl;
            cnt++;
            if (cnt == 25000) return -1;
        }
        return 0;
    }
    for (int i = s; i < c; i++) {
        ans[ans_cnt] = let[i];
        ans_cnt++;
        int f = 0;
        if (let[i] == 'a'|| let[i] == 'e' || let[i] == 'i' || let[i] == 'o' || let[i] == 'u') {
            yu++;
            f = 1;
        } else {
            fu++;
        }

        if (func(i + 1, left - 1) == -1) return -1;
        
        if(f == 1) yu--;
        else fu--;
        ans_cnt--;
    }
    return 0;
}

int main() {
    cin >> l >> c;
    for (int i = 0; i < c; i++) {
        cin >> let[i];
    }
    sort(let, let + c);
    func(0, l);
    return 0;
}
