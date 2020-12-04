//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<queue>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//    int sumNumbers(TreeNode* root) {
//        int number = 0;
//        string temp;
//        if (root == nullptr)return 0;
//        preOrder(root, number, temp);
//        return number;
//    }
//    void preOrder(TreeNode* root, int& sum, string& temp) {
//        if (root ->left==NULL&&root->right==NULL) { 
//            temp += (char)(root->val + '0');
//            sum += atoi(temp.c_str()); 
//            temp.pop_back();
//        }
//        else {
//            temp += (char)(root->val+'0');
//            if(root->left)
//            preOrder(root->left, sum, temp);
//            if(root->right)
//            preOrder(root->right, sum, temp);
//            temp.pop_back();
//        }
//    }
//   /* ִ����ʱ��0 ms, ������ C++ �ύ�л�����100.00 % ���û�
//        �ڴ����ģ�12.5 MB, ������ C++ �ύ�л�����19.29 % ���û�*/
//    int sumNumbers2(TreeNode* root) {
//        int sum = 0,val=0;
//        queue< TreeNode*> q1;
//        queue<int> q2;
//        TreeNode* temp;
//        if (root == nullptr)return sum;
//        q1.push(root);
//        q2.push(root->val);
//        while (!q1.empty()) {
//            temp = q1.front(); q1.pop();
//            val = q2.front(); q2.pop();
//            if (temp->left != nullptr) {
//                q1.push(temp->left);
//                q2.push(val * 10 + temp->left->val);
//            }
//            if (temp->right != nullptr) {
//                q1.push(temp->right);
//                q2.push(val * 10 + temp->right->val);
//            }
//            if (temp->left == NULL && temp->right == NULL) {
//                sum += val;
//            }
//        }
//        return sum;
//    }
//   /* ִ����ʱ��4 ms, ������ C++ �ύ�л�����81.75 % ���û�
//        �ڴ����ģ�13.1 MB, ������ C++ �ύ�л�����9.80 % ���û�
//        BFS*/
//
//};
//int main() {
//    Solution b;
//
//    TreeNode *a=new TreeNode (4);
//    a->left = new TreeNode(9);
//    a->left->left = new TreeNode(5);
//    a->left->right = new TreeNode(1);
//    a->right = new TreeNode(0);
//    b.sumNumbers(a);
//    return 0;
//}
// 
//
