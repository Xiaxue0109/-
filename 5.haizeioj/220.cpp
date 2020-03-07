/*************************************************************************
	> File Name: 220.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月29日 星期三 15时02分15秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

struct student{
    string name;
    int a, b, c, d;
    int sum;
};

bool cmp1(student a, student b) {
    if (a.a == b.a) return a.name < b.name;
    return a.a > b.a;
}

bool cmp2(student a, student b) {
    if (a.b == b.b) return a.name < b.name;
    return a.b > b.b;
}

bool cmp3(student a, student b) {
    if (a.c == b.c) return a.name < b.name;
    return a.c > b.c;
}

bool cmp4(student a, student b) {
    if (a.d == b.d) return a.name < b.name;
    return a.d > b.d;
}

bool cmp5(student a, student b) {
    if (a.sum == b.sum) return a.name < b.name;
    return a.sum > b.sum;
}
int main() {
    student stu[105];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].a >> stu[i].b 
            >> stu[i].c >> stu[i].d;
        stu[i].sum = stu[i].a + stu[i].b 
                    + stu[i].c + stu[i].d;
    }
    sort(stu, stu + n, cmp1);
    for (int i = 0; i < 4; i++) {
        if (i) cout << " ";
        cout << stu[i].name;
    }
    cout << endl;
    
    sort(stu, stu + n, cmp2);
    for (int i = 0; i < 4; i++) {
        if (i) cout << " ";
        cout << stu[i].name;
    }
    cout << endl;

    sort(stu, stu + n, cmp3);
    for (int i = 0; i < 4; i++) {
        if (i) cout << " ";
        cout << stu[i].name;
    }
    cout << endl;

    sort(stu, stu + n, cmp4);
    for (int i = 0; i < 4; i++) {
        if (i) cout << " ";
        cout << stu[i].name;
    }
    cout << endl;

    sort(stu, stu + n, cmp5);
    for (int i = 0; i < 4; i++) {
        if (i) cout << " ";
        cout << stu[i].name;
    }
    cout << endl;
    return 0;
}
