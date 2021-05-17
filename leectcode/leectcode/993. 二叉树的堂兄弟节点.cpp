//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//class Solution {
//public:
//    bool isCousins(TreeNode* root, int x, int y) {
//        if (getDepth(root, x, 0) == getDepth(root, y, 0)) {
//            return !isSister(x, y, root);
//        }
//        return false;
//    }
//    int getDepth(TreeNode* root, int x, int depth) {
//        if (root == nullptr)return -1;
//        if (root->val == x)return depth;
//        int temp = getDepth(root->left, x, depth + 1);
//        if (temp != -1)return temp;
//        return getDepth(root->right, x, depth + 1);
//    }
//    bool isSister(int x, int y, TreeNode* root) {
//        if (root != NULL && root->left != NULL && root->right != NULL) {
//            int a = root->left->val;
//            int b = root->right->val;
//            if (a == x && b == y)return true;
//            if (a == y && b == x)return true;
//        }
//        bool temp = false;
//        if (root->left != NULL)temp = isSister(x, y, root->left);
//        if (temp == true)return temp;
//
//        if (root->right != NULL)return  isSister(x, y, root->right);
//        return false;
//
//    }
//};
//
////执行用时：4 ms, 在所有 C++ 提交中击败了72.41 % 的用户
////内存消耗：10.5 MB, 在所有 C++ 提交中击败了95.69 % 的用户
//
//int main() {
//    Solution b;
//
//}