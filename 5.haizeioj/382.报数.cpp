/*************************************************************************
	> File Name: 382.报数.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月09日 星期三 13时50分36秒
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (q.size() != 1) {
        for (int i = 1; i < m; i++) {
            q.push(q.front()); // front是队列中的一个引用，队列为空返回值就是未定义，就是将前边的元素引用放到后边
            q.pop(); // 是将前边的元素删除掉
        }
        q.pop(); //淘汰报数是M的人
    }
    cout << q.front() << endl;
    return 0;
}
