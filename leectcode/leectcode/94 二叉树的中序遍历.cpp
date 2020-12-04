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
//
//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        stack<TreeNode*> sta;
//        vector<int> ans;
//        TreeNode* p = root;       
//        do {
//            while (p) {
//                sta.push(p);
//                p = p->left;
//            }
//            
//            if (sta.empty() == false) {
//                p = sta.top();
//               
//                sta.pop();
//                ans.push_back(p->val);
//                p = p->right;
//            }
//        } while (p||sta.empty() == false);
//        return ans;
//    }
//    /*执行用时：0 ms, 在所有 C++ 提交中击败了100.00 % 的用户
//        内存消耗：8.6 MB, 在所有 C++ 提交中击败了11.66 % 的用户*/
//    
//};
//
//
//int main() {
//    Solution b;
//
//}