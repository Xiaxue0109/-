/*************************************************************************
	> File Name: 169.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月20日 星期一 17时12分51秒
 ************************************************************************/

#include<iostream>
#include <string>

using namespace std;

int main() {
    int n, num[1000] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        char a;
        int b;
        cin >> a >> b;
        num[(int)a] = b;
    }
    string str;
    cin >> str;
    int ans = 0;
    for (int i = 0; i < str.size(); i++) {
        ans += num[(int)str[i]];
    }
    cout << ans << endl;
    return 0;
}
