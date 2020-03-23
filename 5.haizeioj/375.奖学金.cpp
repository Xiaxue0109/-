/*************************************************************************
	> File Name: 375.奖学金.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月23日 星期一 23时37分31秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int flag;
    int a, b, c;
    int sum;
};

Student stu[305];

int cmp(Student x, Student y) {
    if (x.sum == y.sum) {
        if (x.a == y.a) {
            return x.flag < y.flag;
        }
        return x.a > y.a;
    }
    return x.sum > y.sum;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        stu[i].flag = i;
        cin >> stu[i].a >> stu[i].b >> stu[i].c;
        stu[i].sum += stu[i].a + stu[i].b + stu[i].c; 
    }
    //从1开始存到数组里，就从+1开始排序
    sort(stu + 1, stu + n + 1, cmp);
    for (int i = 1; i <= 5; i++) {
        cout << stu[i].flag << " " << stu[i].sum << endl;
    }
    return 0;
}
