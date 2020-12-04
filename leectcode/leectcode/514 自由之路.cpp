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
//	int findRotateSteps(string ring, string key) {
//		int size = ring.size();
//		vector<int> a(size, -1), b(size, -1);
//		for (int i = 0; i < key.size(); i++) {
//			for (int j = 0; j < size; j++) {
//				if (key[i] == ring[j]) {
//					if (i == 0) {
//						if (b[j] == -1)
//							b[j] = min(j, size - j);
//						else {
//							b[j] = min(b[j], min(j, size - j));
//						}
//						continue;
//					}				
//					for (int k = 0; k < size; k++) {
//						
//						if (a[k] != -1 && b[j] == -1) {
//							b[j] = a[k] + min(abs(j - k), size - abs(j - k));
//						}
//						else if(a[k]!=-1){
//							b[j] = min(b[j], a[k] + min(abs(j - k), size - abs(j - k)));
//						}
//					}
//				}
//			}
//			a = b;
//			for (int j = 0; j < size; j++)
//				b[j] = -1;
//		}
//		int ans = INT_MAX;
//		for (int j = 0; j < size; j++)
//			if (a[j] != -1)
//				ans = min(ans, a[j]);
//		return ans + key.size();
//	}
//	/*执行用时：44 ms, 在所有 C++ 提交中击败了51.38 % 的用户
//		内存消耗：6.8 MB, 在所有 C++ 提交中击败了86.19 % 的用户*/
//
//};
//
//int main() {
//	Solution b;
//	b.findRotateSteps("godding","gd");
//}