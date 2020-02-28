/*************************************************************************
	> File Name: 287.寻找重复数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 16时00分55秒
 ************************************************************************/
//这题主要是用了一一映射的关系，也相当于快慢指针
//第一个do while是判断有无环的
//第二个while是看相交的位置

int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q = nums[0];
    do {
        p = nums[p];
        q = nums[nums[q]];
    } while (p != q);
    q = nums[0];
    while (p != q) {
        p = nums[p];
        q = nums[q];
    }
    return p;
}
