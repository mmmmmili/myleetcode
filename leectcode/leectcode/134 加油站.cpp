//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//		int size = gas.size();
//		bool flag = false;
//		int sum = 0, index = 0, temp;
//
//		for (int i = 0; i < size; i++) {
//			temp = gas[i] - cost[i];
//			if (flag == false) {
//				if (temp < 0) {
//					continue;
//				}
//				else {
//					flag = true;
//					index = i;
//					sum = temp;
//				}
//			}
//			else {
//				sum += temp;
//				if (sum < 0) {
//					flag = false;
//				}
//			}
//
//		}
//		if (index == 0 && flag == true)return 0;
//		if (flag == false)return -1;
//		else {
//			for (int i = 0; i < index; i++) {
//				temp = gas[i] - cost[i];
//				if (flag == false) {
//					if (temp < 0) {
//						continue;
//					}
//					else {
//						flag = true;
//						index = i;
//						sum = temp;
//					}
//				}
//				else {
//					sum += temp;
//					if (sum < 0) {
//						flag = false;
//					}
//				}
//
//			}
//		}
//
//		return flag == true?index:-1;
//
//	}/*执行用时：4 ms, 在所有 C++ 提交中击败了99.45 % 的用户
//		内存消耗：10 MB, 在所有 C++ 提交中击败了5.23 % 的用户*/
//};
//
//
//int main() {
//	Solution b;
//
//}