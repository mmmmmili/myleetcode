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
//   /* ִ����ʱ��44 ms, ������ C++ �ύ�л�����11.92 % ���û�
//        �ڴ����ģ�25.2 MB, ������ C++ �ύ�л�����5.42 % ���û�*/
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
//    }//����������õ�һ������������
//    //ִ����ʱ��20 ms, ������ C++ �ύ�л�����98.14% ���û�
//    //�ڴ����ģ�25 MB, ������ C++ �ύ�л�����18.49 % ���û�
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
//    //ִ����ʱ��24 ms, ������ C++ �ύ�л�����92.95% ���û�
//    //�ڴ����ģ�24.6 MB, ������ C++ �ύ�л�����66.04 % ���û�
//};