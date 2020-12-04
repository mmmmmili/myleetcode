//
// 
//
//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<queue>
//using namespace std;
//
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x,  TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//class Solution {
//public:
//    vector<int> preorderTraversal(TreeNode* root) {
//        vector<int> ans;
//        if (root == nullptr)return ans;
//        stack<TreeNode*> q;      
//        TreeNode* temp= root;
//        while (!q.empty()||temp!=nullptr) {
//           
//            ans.push_back(temp->val);
//            if (temp->right)q.push(temp->right);
//            if (temp->left) {
//                temp = temp->left;
//            }
//            else if(!q.empty()){
//                temp = q.top();
//                q.pop();
//            }
//            else {
//                temp = NULL;
//            }          
//        }
//        return ans;
//    }
//    /*ִ����ʱ��0 ms, ������ C++ �ύ�л�����100.00 % ���û�
//        �ڴ����ģ�8.6 MB, ������ C++ �ύ�л�����18.38 % ���û�*/
//};
//int main() {
//    Solution b;
//
//}