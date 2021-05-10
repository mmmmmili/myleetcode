//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
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
//    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//        vector<int> a, b;
//        findLeaf(root1, a);
//        findLeaf(root2, b);
//        int size = 0;
//        if (size = a.size() && size != b.size())return false;
//        for (int i = 0; i < size; i++) {
//            if (a[i] != b[i])
//                return false;
//        }
//        return true;
//
//    }
//    void findLeaf(TreeNode* root1, vector<int>& a) {
//        if (root1->left == NULL && root1->right == NULL) {
//            a.push_back(root1->val);
//            return;
//        }
//        if (root1->left != NULL) {
//            findLeaf(root1->left, a);
//        }
//        if (root1->right != NULL) {
//            findLeaf(root1->right, a);
//        }
//    }/*执行用时：0 ms, 在所有 C++ 提交中击败了100.00 % 的用户
//        内存消耗：12.5 MB, 在所有 C++ 提交中击败了27.07 % 的用户*/
//};
//
//int main() {
//    Solution b;
//
//}