/*************************************************************************
	> File Name: 171.最近回文数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月08日 星期三 17时11分08秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

string n, n1, n2, n3;

int c1() {
    for (int i = 0, j = n.size() - 1; i <= j; i++, j--) {
        if (n[i] != n[j]) return 0;
    }
    return 1;
}

int c2() {
    if (n[0] != '1') return 0;
    for (int i = 1; i < n.size(); i++) {
        if (n[i] != '0') return 0;
    }
    return 1;
}

void make1() {
    int mid = (n1.size() + 1) / 2 - 1;
    n1[mid] -= 1;
    for (int i = mid; i >= 0; i--) {
        if (n1[i] < '0') {
            n1[i - 1] -= 1;
            n1[i] += 10;
        }
    }
    for (int i = 0, j = n1.size() - 1; i < j; i++, j--) {
        n1[j] = n1[i];
    }
}

void make2() {
    for (int i = 0, j = n2.size() - 1; i < j; i++, j--) {
        n2[j] = n2[i];
    }
}

void make3() {
    int mid = (n1.size() + 1) / 2 - 1;
    n3[mid] += 1;
    for (int i = mid; i >= 0; i--) {
        if (n3[i] > '9') {
            n1[i - 1] += 1;
            n3[i] -= 10;
        }
    }
    for (int i = 0, j = n3.size() - 1; i < j; i++, j--) {
        n3[j] = n3[i];
    }
}

int main() {
    cin >> n;
    if (c1()) {
        cout << n << endl;
        return 0;
    }
    if (c2()) {
        for (int i = 1; i < n.size(); i++) {
            cout << 9;
        }
        return 0;
    }
    n1 = n2 = n3 = n;
    make2();
    int flag = 0;
    if (n2 < n) {
        make3();
        flag = 1;
    } else {
        make1();
    }
    if (flag == 1) {
        string min_num, max_num;
        min_num = max_num = n;
        for (int i = 0; i < n.size(); i++) {
            min_num[i] = max_num[i] = '0';
        }
        for (int i =  n.size() - 1; i >= 0; i--) {
            min_num[i] = n[i] - n2[i] + '0';
            max_num[i] = n3[i] - n[i] + '0';
        }
        for (int i = n.size() - 1; i >= 0; i--) {
            if (min_num[i] < '0') {
                min_num[i - 1] -= 1;
                min_num[i] += 10;
            }
            if (max_num[i] < '0') {
                max_num[i - 1] -= 1;
                max_num[i] += 10;
            }
        }
        if (max_num < min_num) {
            cout << n3 << endl;
        } else {
            cout << n2 << endl;
        }
    } else {
        string min_num, max_num;
        min_num = max_num = n;
        for (int i = 0; i < n.size(); i++) {
            min_num[i] = max_num[i] = '0';
        }
        for (int i =  n.size() - 1; i >= 0; i--) {
            min_num[i] = n[i] - n1[i] + '0';
            max_num[i] = n2[i] - n[i] + '0';
        }
        for (int i = n.size() - 1; i >= 0; i--) {
            if (min_num[i] < '0') {
                min_num[i - 1] -= 1;
                min_num[i] += 10;
            }
            if (max_num[i] < '0') {
                max_num[i - 1] -= 1;
                max_num[i] += 10;
            }
        }
        if (max_num < min_num) {
            cout << n2 << endl;
        } else {
            cout << n1 << endl;
        }
        
    }


    return 0;
}
