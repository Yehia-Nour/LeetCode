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
    string tree2str(TreeNode* root) {
        if (!root) return "";

        
        string str = to_string(root->val);

        if (root->left) str += "(" + tree2str(root->left) + ")";

        if (root->right) {
            if (!root->left) str += "()";
            str += "(" + tree2str(root->right) + ")";
        }

        return str;
    }
};