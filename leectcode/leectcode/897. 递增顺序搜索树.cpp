//#include<algorithm>
//#include<iostream>
//#include<string>
//#include<vector>
//#include <unordered_map>
//#include<stack>
//#include<set>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//class Solution {
//public:
//	TreeNode* increasingBST(TreeNode* root) {
//		stack<TreeNode* > st;
//		vector<TreeNode* > list;
//		TreeNode* temp = NULL;
//		while (root != NULL || st.empty() == false) {
//			while (root != NULL) {
//				st.push(root);
//				root = root->left;
//			}
//			temp = st.top();
//			st.pop();
//			root = temp->right;
//			list.push_back(temp);
//
//		}
//		root = list[0];
//		for (int i = 1;i < list.size();i++) {
//			root->right = list[i];
//			root = root->right;
//		}
//		root->right = NULL;
//		return root;
//
//	}
//};