/*************************************************************************
	> File Name: 226.二叉搜索树的最近公共祖先.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 19时29分47秒
 ************************************************************************/
/*
 *Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 // method 1:
struct TreeNode *_lowestCommonAncestor(struct TreeNode *root, struct TreeNode *p, struct TreeNode *q) {
    if (root->val == p->val) return p;
    if (root->val == q->val) return q;
    if (root->val > p->val && root->val < q->val) return root;
    if (p->val > root->val) return _lowestCommonAncestor(root->right, p, q);
    return _lowestCommonAncestor(root->left, p, q);
}

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root == NULL) return NULL;
    if (p->val == q->val) return p;
    /*p->val > q->val
    p->val < q->val */
    if (p->val > q->val) {
        struct TreeNode *temp = p;
        p = q; 
        q = temp;
    }
    return _lowestCommonAncestor(root, p, q);
}

//method 2:
 
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) { 
    if (root == NULL) return NULL;
    if (((root->val - p->val) * (root->val - q->val)) <= 0) return root;
    if (root->val > p->val) {
        return lowestCommonAncestor(root->left, p, q);
    } else {
        return lowestCommonAncestor(root->right, p, q);
    }

}
