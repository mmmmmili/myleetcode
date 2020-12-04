//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
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
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        return build(preorder, inorder, 0, preorder.size(), 0, preorder.size());
//    }
//    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int start1,int end1,int start2,int end2) {
//     
//        /// 前序遍历 preorder = [3,9,20,15,7]
//       // 中序遍历 inorder = [9, 3, 15, 20, 7]
//       //0,5,0,5
//        int size = preorder.size();
//        if (start1<0 || start2<0 || start1 >= end1 || start2 >= end2 || end1>size || end2>size)return NULL;
//        TreeNode* tempRoot = new TreeNode(preorder[start1]);
//        for (int i = start2; i < end2; i++) {
//            if (inorder[i] == preorder[start1] && i != start2) {//意思是他有左孩子而且i指向中序遍历的root
//                int length = i - start2;//左孩子的长度
//                tempRoot->left = build(preorder, inorder, start1 + 1, start1+1+ i - start2, start2, i);
//                tempRoot->right = build(preorder, inorder, start1 + 1 + i - start2, end1, i + 1, end2);
//                //哇这边的长度换算好恶心，各个变量代表什么意思得好好看看啊！！！！！！！
//                        return tempRoot;
//                    
//            }
//            else if (inorder[i] == preorder[start1] && i == start2)//意思是没有左孩子而且i指向中序遍历的root
//            {
//                tempRoot->right = build(preorder, inorder, start1+1, end1, start2+1, end2);
//                return tempRoot;
//            }
//        }
//        return tempRoot;
//    }
//    /*执行用时：80 ms, 在所有 C++ 提交中击败了14.31 % 的用户
//        内存消耗：17.4 MB, 在所有 C++ 提交中击败了44.30 % 的用户*/
//};
//
//
//int main() {
//    Solution b;
//    vector<int> a = { 1,2,3}, c = {3,2,1};
//    b.buildTree(a, c);
//    b.build(a, c, 0, 1, 0, 1);
//}