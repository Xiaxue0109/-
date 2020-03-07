/*************************************************************************
	> File Name: 153.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月30日 星期四 19时50分02秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int year, month, day;
    cin >> year >> month >> day;
    if (month <= 2) {
        month += 12; 
        year--;
    }
    int h = (day + 26 * (month + 1) / 10 + year % 100 + 
         (year % 100) / 4 + (year / 100) / 4 + 
         5 * (year / 100)) % 7;
    switch (h) {
        case 0: cout << 6 << endl; break;
        case 1: cout << 7 << endl; break;
        case 2: cout << 1 << endl; break;
        case 3: cout << 2 << endl; break;
        case 4: cout << 3 << endl; break;
        case 5: cout << 4 << endl; break;
        case 6: cout << 5 << endl; break;
    }
    return 0;
}
