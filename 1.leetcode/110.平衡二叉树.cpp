/*************************************************************************
	> File Name: 110.平衡二叉树.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 16时56分01秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
//平衡二叉树每一个节点的子树深度差 <= 1
// 方法1：
int Depth(struct TreeNode *root) {
    if (root == NULL) return 0;
    int l = Depth(root->left), r = Depth(root->right);
    return (l > r ? l : r) + 1;
}

bool isBalanced(struct TreeNode* root){
    if (root == NULL) return true;
    int l = Depth(root->left), r = Depth(root->right);
    if (abs(l - r) > 1) return false;
    return isBalanced(root->left) && isBalanced(root->right);
}

// 方法2：

