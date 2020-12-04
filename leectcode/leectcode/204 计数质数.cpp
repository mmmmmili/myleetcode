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
//	int countPrimes(int n) {
//		if (n < 3)return 0;
//
//		int cnt = 1;
//		vector<int> temp;
//		temp.push_back(2);
//		for (int i = 3; i < n; i = i + 2) {
//			bool flag = true;
//			for (int j = 0; j < temp.size() && temp[j] <= sqrt(i); j++) {
//				if (i % temp[j] == 0) {
//					flag = false;
//					break;
//				}
//
//			}
//			if (flag) { temp.push_back(i); cnt++; }
//
//
//		}
//		return cnt;
//
//	}
//	/*执行用时：736 ms, 在所有 C++ 提交中击败了5.60 % 的用户
//		内存消耗：9.1 MB, 在所有 C++ 提交中击败了20.68 % 的用户*/
//	int countPrimes2(int n) {
//		if (n < 3)return 0;
//
//		int cnt=0;
//		vector<bool> temp(n,true);
//		temp[0] = false;
//		temp[1] =false;
//		//temp[2] = true;
//		for (int i = 2; i < n; i++) {
//			if (temp[i] == true) {
//				for (long j = (long)i * i; j < n; j=j+i) {
//					temp[j] = false;
//				}
//			}
//		}
//		for (int i = 2; i < n; i++) {
//			if (temp[i])cnt++;
//		}
//		return cnt;
//
//	}
//	/*执行用时：288 ms, 在所有 C++ 提交中击败了35.31 % 的用户
//		内存消耗：6.8 MB, 在所有 C++ 提交中击败了35.13 % 的用户*/
//};
//
//int main() {
//	Solution b;
//
//}