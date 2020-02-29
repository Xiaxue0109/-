/*************************************************************************
	> File Name: 100.相同的树.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 14时41分40秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
	// 两个树都为空
    if (p == NULL && q == NULL) return true;
	// 一个树为空
    if (p == NULL || q == NULL) return false;
    // 值不相等就返回false
	if (p->val != q->val) return false;
    // 相同就调用函数，看左右孩子值相不相等
	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right); 
}
