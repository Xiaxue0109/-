/*************************************************************************
	> File Name: 207.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月29日 星期三 14时09分14秒
 ************************************************************************/

#include<iostream>
using namespace std;

struct student {
    string name;
    int num[4], sum;
};

int main() {
    student stu[35];
    int n, maxn = 0, max = 0, min = 450;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        stu[i].sum = 0;
        for (int j = 0; j < 4; j++) {
            int temp;
            cin >> temp;
            stu[i].num[j] = temp;
            stu[i].sum += temp;
            if (max < temp) max = temp;
            if (min > temp) min = temp;
        }
        if (stu[maxn].sum < stu[i].sum) maxn = i;
    }
    for (int i = 0; i < n; i++) {
        cout << stu[i].sum << endl;
    }
    cout << stu[maxn].name << endl;
    cout << max << " " << min << endl;
    return 0;
}
