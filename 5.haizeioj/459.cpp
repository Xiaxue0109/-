/*************************************************************************
	> File Name: 459.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月06日 星期四 14时46分54秒
 ************************************************************************/

#include<iostream>
#include <iomanip>
using namespace std;

struct student {
    string name;
    char sex;
    int year;
    double weight;
};

int main() {
    student s;
    cin >> s.name >> s.sex >> s.year >> s.weight;
    cout << s.name << " " << s.sex << " " << s.year << " ";
    cout << fixed << setprecision(1) << s.weight << endl;
    return 0;
}
