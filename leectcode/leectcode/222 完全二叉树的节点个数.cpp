//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  };
// 
//class Solution {
//public:
//    int countNodes(TreeNode* root) {
//        if (root == NULL)return 0;
//        return 1 + countNodes(root->left) + countNodes(root->right);
//
//    }
//   /* ִ����ʱ��64 ms, ������ C++ �ύ�л�����23.84 % ���û�
//        �ڴ����ģ�30.9 MB, ������ C++ �ύ�л�����26.30 % ���û�*/
//    int countNodes(TreeNode* root) {
//        int sum = 0;
//        int heightL = 0, heightR = 0;
//        while (root != NULL) {
//            heightL = getHeight(root->left);
//            heightR = getHeight(root->right);
//            if (heightL == heightR) {
//                root = root->right;
//                sum += 1 << (heightL)-1;
//            }
//            else {
//                root = root->left;
//                sum += 1 << (heightR)-1;
//            }
//            sum++;
//            
//        }
//        return sum;
//    }
//    int getHeight(TreeNode* root) {
//        int cnt = 0;
//        while (root != NULL) {
//            cnt++;
//            root = root->left;
//        }
//        return cnt;
//
//    }
//   /* ִ����ʱ��60 ms, ������ C++ �ύ�л�����37.54 % ���û�
//        �ڴ����ģ�30.8 MB, ������ C++ �ύ�л�����33.10 % ���û�*/
//
//    int countNodes(TreeNode* root) {
//        if (root == NULL)return 0;
//        int level = 0,sum;
//        TreeNode* ptr = root;
//        while (ptr != NULL) {
//            level++;
//            ptr = ptr->left;
//        }
//        sum = 1 << (level - 1) - 1;
//        int end = 1 << level - 1;
//        for (int i = sum + 1; i < end; i++) {
//            if (exist(root, i, level) == false)return i - 1;
//        }
//       
//    }
//    bool exist(TreeNode* root, int number, int level) {
//
//    }
//};
//
//int main() {
//    Solution b;
//
//}