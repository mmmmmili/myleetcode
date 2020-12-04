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
//            int continu = 1;///其实这个continue才是最关键的！！！！！！
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
//   /* 执行用时：0 ms, 在所有 C++ 提交中击败了100.00 % 的用户
//        内存消耗：8.7 MB, 在所有 C++ 提交中击败了12.09 % 的用户*/
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
//                    pre = p;///其实这个pre才是最关键的！！！！！！
//                }
//                else{
//                    sta.push(p);
//                    p = p->right;
//                    pre = p;///其实这个pre才是最关键的！！！！！！
//
//                    continu = 0;
//                    break;
//                }
//                
//            }
//        } while (sta.empty() == false);
//        return ans;
//    }
//    /*执行用时：4 ms, 在所有 C++ 提交中击败了47.45 % 的用户
//        内存消耗：8.4 MB, 在所有 C++ 提交中击败了54.70 % 的用户*/
//};
//
//
//int main() {
//    Solution b;
//
//}