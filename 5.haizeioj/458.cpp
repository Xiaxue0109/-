/*************************************************************************
	> File Name: 458.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月06日 星期四 14时27分51秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

struct student {
    string name;
    string sex;
    int year;
    int month;
};

bool cmp (student a, student b) {
    if (a.year == b.year) return a.month > b.month;
    return a.year > b.year;
}

int main() {
    student stu[105];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].sex 
            >> stu[i].year >> stu[i].month;
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << stu[i].name << " " << stu[i].sex << " "
             << stu[i].year << " " << stu[i].month << endl;
    }
    return 0;
}
