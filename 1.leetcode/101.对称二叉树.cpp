/*************************************************************************
	> File Name: 101.对称二叉树.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 14时57分26秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool is_check (struct TreeNode *p, struct TreeNode *q) {
    if (p == NULL && q == NULL) return true;
    if (p == NULL || q == NULL) return false;
    if (p->val != q->val) return false;
    return is_check(p->left, q->right) && is_check(p->right, q->left);
	//镜像对称的话是：左子树的左孩子 和 右树的右孩子
	//                        右              左
}

bool isSymmetric(struct TreeNode* root){
    //空树是对称的
    if (root == NULL) return true;
    return is_check(root->left, root->right);
}
