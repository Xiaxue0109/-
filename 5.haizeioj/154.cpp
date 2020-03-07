/*************************************************************************
	> File Name: 154.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月30日 星期四 23时11分15秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            if (j != i) cout << " ";
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
