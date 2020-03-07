/*************************************************************************
	> File Name: 215.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 00时53分33秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

struct student {
    string name;
    int sum;
};

bool cmp(student a, student b) {
    return a.sum > b.sum;
}

int main() {
    student stu[45];
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        stu[i].sum = 0;
        for (int j = 0; j < 4; j++) {
            int temp;
            cin >> temp;
            stu[i].sum += temp; 
        }
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < 3; i++) {
        cout << stu[i].name << endl;
    }
    return 0;
}
