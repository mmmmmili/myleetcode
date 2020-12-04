//#include<iostream>
//#include<set>
//#include <unordered_set>
//#include <vector>
//#include <algorithm>
//using namespace std;
////*
//// * Definition for a binary tree node.
//// * struct TreeNode {
//// *     int val;
//// *     TreeNode *left;
//// *     TreeNode *right;
//// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//// * };
//// 
//struct TreeNode {
//        int val;
//      TreeNode *left;
//         TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//   };
//class Solution {
//public:
//    int getMinimumDifference(TreeNode* root) {
//        vector<int> a;
//        get(root,a);
//        sort(a.begin(),a.end());
//        int min=INT16_MAX;
//        for (int i = 1; i < a.size(); i++) {
//            if (a[i] - a[i - 1] < min)min = a[i] - a[i - 1];
//        }
//        return min;
//    }
//    void get(TreeNode* root, vector<int>& vec) {
//        if (!root)return;
//        vec.push_back(root->val);
//        get(root->right,vec);
//        get(root->left,vec);
//    }
//   /* 执行用时：44 ms, 在所有 C++ 提交中击败了11.92 % 的用户
//        内存消耗：25.2 MB, 在所有 C++ 提交中击败了5.42 % 的用户*/
//    int getMinimumDifference(TreeNode* root) {
//        vector<int> a;
//        get(root, a);
//        // sort(a.begin(),a.end());
//        int min = INT16_MAX;
//        for (int i = 1; i < a.size(); i++) {
//            if (a[i] - a[i - 1] < min)min = a[i] - a[i - 1];
//        }
//        return min;
//    }
//    void get(TreeNode* root, vector<int>& vec) {
//        if (!root)return;
//        get(root->left, vec);
//        vec.push_back(root->val);
//        get(root->right, vec);
//
//    }//中序遍历，得到一个递增的数列
//    //执行用时：20 ms, 在所有 C++ 提交中击败了98.14% 的用户
//    //内存消耗：25 MB, 在所有 C++ 提交中击败了18.49 % 的用户
//    int getMinimumDifference(TreeNode* root) {
//        int ans = INT16_MAX,pre=-1;
//        get(root, pre,ans);
//        
//        return ans;
//    }
//    void get(TreeNode* root, int& pre,int& ans) {
//        if (!root)return;
//        get(root->left, pre,ans);
//        if (pre == -1)pre = root->val;
//        else if (root->val - pre < ans)ans = root->val - pre;
//        pre = root->val;
//        get(root->right, pre,ans);
//
//    }
//    //执行用时：24 ms, 在所有 C++ 提交中击败了92.95% 的用户
//    //内存消耗：24.6 MB, 在所有 C++ 提交中击败了66.04 % 的用户
//};