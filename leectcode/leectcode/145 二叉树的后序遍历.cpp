//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };
//struct TempNode {
//    TreeNode* node;
//    int times = 0;
//    TempNode(TreeNode* ptr = NULL) :node(ptr) {};
//  
//};
//class Solution {
//public:
//    vector<int> postorderTraversal(TreeNode* root) {
//        stack<TempNode> sta;
//        vector<int> ans;
//        TreeNode* p=root;
//        TempNode tempNode;
//        do {
//            while (p) {
//                sta.push(TempNode(p));
//                p = p->left;
//            }
//            int continu = 1;///��ʵ���continue������ؼ��ģ�����������
//            while (continu &&sta.empty() == false) {
//                tempNode = sta.top();
//                p = tempNode.node;
//                sta.pop();
//                switch (tempNode.times)
//                {
//                case 0:
//                    tempNode.times++;
//                    sta.push(tempNode);
//                    p = p->right;
//                    continu = 0;
//                    break;
//                case 1:
//                    ans.push_back(p->val);
//                    break;
//                default:
//                    break;
//                }
//            }
//        } while (sta.empty() == false);
//        return ans;
//    }
//   /* ִ����ʱ��0 ms, ������ C++ �ύ�л�����100.00 % ���û�
//        �ڴ����ģ�8.7 MB, ������ C++ �ύ�л�����12.09 % ���û�*/
//    vector<int> postorderTraversal(TreeNode* root) {
//        stack<TreeNode* > sta;
//        vector<int> ans;
//        TreeNode* p = root,*pre=NULL;
//        do {
//            while (p) {
//                sta.push(p);
//                p = p->left;
//            }
//            int continu = 1;
//            while (continu && sta.empty() == false) {
//                p = sta.top();
//                sta.pop();
//                if (p->right == NULL || p->right == pre) {
//                    ans.push_back(p->val);
//                    pre = p;///��ʵ���pre������ؼ��ģ�����������
//                }
//                else{
//                    sta.push(p);
//                    p = p->right;
//                    pre = p;///��ʵ���pre������ؼ��ģ�����������
//
//                    continu = 0;
//                    break;
//                }
//                
//            }
//        } while (sta.empty() == false);
//        return ans;
//    }
//    /*ִ����ʱ��4 ms, ������ C++ �ύ�л�����47.45 % ���û�
//        �ڴ����ģ�8.4 MB, ������ C++ �ύ�л�����54.70 % ���û�*/
//};
//
//
//int main() {
//    Solution b;
//
//}