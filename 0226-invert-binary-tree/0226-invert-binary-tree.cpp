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
private:
    void Invert(TreeNode* root)
    {
        if(root == NULL) return;

        TreeNode* temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;

        Invert(root->left);
        Invert(root->right);

    }
public:
    TreeNode* invertTree(TreeNode* root) {
        Invert(root);
        return root;
    }
};