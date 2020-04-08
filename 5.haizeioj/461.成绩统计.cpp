/*************************************************************************
	> File Name: 461.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月06日 星期四 15时00分58秒
 ************************************************************************/

//atoi函数的使用:将 字符串数字 转换成 整形数字

#include <iostream>
using namespace std;
#include <cstring>
#include <cstdlib> 

struct stu {
	string a;
	string b;
}m[1005];

int main() {
	int n;
	cin >> n;
	int t = 0, q = 0;
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> m[i].a >> m[i].b;
		if (m[i].a == "C") {
			t++;
		}  else {
			q++;
			sum += atoi(m[i].b.c_str());
		}
	}
	cout << t << " " << (int) (sum / q);
	return 0;
} 
 
