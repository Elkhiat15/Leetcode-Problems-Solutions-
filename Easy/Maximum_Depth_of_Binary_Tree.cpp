/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        //// count the left depth and right ->each time return max of them
        if(root == nullptr) return 0;
        int l=0,r=0;
        if(root->left == nullptr) l++;
        else l=1+maxDepth(root->left);
        if(root->right == nullptr) r++;
        else r=1+maxDepth(root->right);
        return max(l,r);
    }
};