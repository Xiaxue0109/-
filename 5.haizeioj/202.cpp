/*************************************************************************
	> File Name: 202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 16时43分06秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

struct student {
    int a;//标号
    int b;//身高
};

bool cmp(student x, student y) {
    if (x.b != y.b) return x.b < y.b;
    return x.a < y.a;
}

int main() {
    student stu[1005];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int temp = i;
        stu[i].a = temp;
        cin >> stu[i].b;
    }
    stable_sort(stu, stu + n, cmp);
    for (int i = 1; i <= n; i++) {
        cout << stu[i].a << endl; 
    }
    return 0;
}
