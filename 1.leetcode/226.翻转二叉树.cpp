/*************************************************************************
	> File Name: 226.翻转二叉树.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 18时46分21秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    if (root == NULL) return NULL;
    // 交换
	struct TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
	// 递归 交换左右子树 左孩子变右孩子
    invertTree(root->left);
    invertTree(root->right);
    return root;
}
