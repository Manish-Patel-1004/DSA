/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
int maxSum = 0;
    struct NodeInfo{
        bool isBST;
        int minVal;
        int maxVal;
        int sum;
    };

    NodeInfo inorder(TreeNode* root){
        if(!root) return {true,INT_MAX,INT_MIN,0};
        NodeInfo left = inorder(root -> left);
        NodeInfo right = inorder(root -> right);
        if(left.isBST && right.isBST && left.maxVal < root->val && root->val < right.minVal){
            int curr = left.sum + right.sum + root -> val;
            maxSum = max(maxSum,curr);
            return {true, min(left.minVal, root->val), max(right.maxVal, root->val), curr};}
        return {false, INT_MIN,INT_MAX,0};
    }
    int maxSumBST(TreeNode* root) {
        maxSum = 0;
        inorder(root);
        return maxSum;
    }
};