//#include<iostream>
//#include<queue>
//#include <unordered_set>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//// Definition for a Node.
//
//class Node {
//public:
//    int val;
//    Node* left;
//    Node* right;
//    Node* next;
//
//    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
//
//    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
//
//    Node(int _val, Node* _left, Node* _right, Node* _next)
//        : val(_val), left(_left), right(_right), next(_next) {}
//};
//
//
//class Solution {
//public:
//    Node* connect1(Node* root) {
//        queue<Node*> Q;
//        if (!root)return root;
//        Q.push(root);
//        while (!Q.empty()) {
//            int size = Q.size();
//            for (int i = 0; i < size; i++) {
//                Node* node = Q.front();
//                Q.pop();
//                if (i < size - 1) {
//                    node->next = Q.front();
//                }
//                if(node->left!=nullptr)Q.push(node->left);//这里是nullptr而不是NULL这居然是重点我服了
//                if (node->right != nullptr)Q.push(node->right);
//            }
//        }
//        return root;
//    }
//   /* 执行用时：28 ms, 在所有 C++ 提交中击败了89.29 % 的用户
//        内存消耗：17.2 MB, 在所有 C++ 提交中击败了7.50 % 的用户*/
//    Node* connect2(Node* root) {
//        Node* leftmost = root;
//        if (leftmost == nullptr)return root;
//        while (leftmost->left != nullptr) {
//            Node* head = leftmost;
//            while (head != nullptr) {
//                head->left->next = head->right;
//                if (head->next != nullptr) {
//                    head->right->next = head->next->left;
//                }
//                head = head->next;
//            }
//            leftmost = leftmost->left;
//        }
//        return root;
//    }
//    /*执行用时：32 ms, 在所有 C++ 提交中击败了74.71 % 的用户
//        内存消耗：16.6 MB, 在所有 C++ 提交中击败了66.06 % 的用户*/
//};