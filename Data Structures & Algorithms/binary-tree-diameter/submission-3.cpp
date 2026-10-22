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

    int height(TreeNode* root){
        if(root == nullptr) return 0;
        int hLeft = height(root->left);
        int hRight = height(root->right);
        diameter = max(diameter, hLeft+hRight);
        return max(hLeft, hRight) +1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
private:
    int diameter = 0;
};
