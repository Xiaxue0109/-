/*************************************************************************
	> File Name: 23.异常处理中的构造与析构.cpp
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月01日 星期二 16时52分26秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <memory>
using namespace std;

struct Exception {};

struct Throw {
    int id;
    Throw(int theId, bool requireThrow) : id { theId } {
        cout << "Throw(" << id << ")" << endl;
        if (requireThrow) {
            throw Exception{};
        }
    }
    ~Throw() {
        cout << "~Throw(" << id << ")" << endl;
    }
};
int main() {
    try {
        auto throws = new Throw[3] {
            {1, false},
            {2, true},
            {3, false},
        };
        delete[] throws;
    }
    catch (Exception) {}

    return 0;
}
