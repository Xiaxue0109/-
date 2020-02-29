/*************************************************************************
	> File Name: 112.路径总和.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 18时37分22秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool hasPathSum(struct TreeNode* root, int sum){
	//树为空
    if (root == NULL) return false;
    // 只有一个根结点，左右子树为空
	if (root->left == NULL && root->right == NULL) return root->val == sum;
	// 调用函数，去减值，看相等不
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}
