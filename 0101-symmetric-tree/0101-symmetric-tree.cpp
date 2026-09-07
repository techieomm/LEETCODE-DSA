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
    bool isBoolSymmetric(TreeNode* left1, TreeNode* right1){
        if( left1== NULL && right1==NULL)return true;
        if((left1 == NULL && right1 != NULL) || (left1 != NULL && right1 == NULL))return false;
        if(left1->val != right1->val){
            return false;
        }
        return isBoolSymmetric(left1->left,right1->right)&& isBoolSymmetric(left1->right,right1->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return isBoolSymmetric(root -> left, root -> right);
    }
};