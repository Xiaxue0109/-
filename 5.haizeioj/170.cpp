/*************************************************************************
	> File Name: 170.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月20日 星期一 16时18分02秒
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;
int main() {
    string str;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        while (str.find("Ban_smoking") != -1) {
            int pos = str.find("Ban_smoking");
            str.replace(pos, 11, "No_smoking");
        }
        cout << str << endl;
    }
    return 0;
}
