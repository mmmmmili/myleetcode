//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//	int kthSmallest(vector<vector<int>>& matrix, int k) {
//		vector<int> List;
//		int q = 0;
//		for (int i = 0; i < matrix.size(); i++) {
//			for (int j = 0; j < matrix[0].size(); j++) {
//				List.push_back(matrix[i][j]);
//				q++;
//			}
//		}
//		sort(List.begin(), List.end());
//		auto p = List.begin();
//		for (; k > 1; ++p, k--) {}
//		return *p;
//	}
//	/*执行用时：112 ms, 在所有 C++ 提交中击败了34.32 % 的用户
//		内存消耗：13.6 MB, 在所有 C++ 提交中击败了8.80 % 的用户*/
//	int kthSmallest(vector<vector<int>>& matrix, int k) {
//		int n = matrix.size();
//		return matrix[(k-1) / n][(k-1) % n];
//	}
//};
//
//int main() {
//    Solution b;
//
//}