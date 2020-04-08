/*************************************************************************
	> File Name: 460.猴子选大王.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月08日 星期三 23时37分06秒
 ************************************************************************/

#include <iostream>
using namespace std;
int main() {
    long long n, k, f = 0;
    cin >> n >> k;
    for (long long i = 1; i <= n; i++)
    	f = (f + k) % i;
    cout << f + 1 << endl;
}
