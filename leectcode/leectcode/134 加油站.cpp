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
//	}/*ִ����ʱ��4 ms, ������ C++ �ύ�л�����99.45 % ���û�
//		�ڴ����ģ�10 MB, ������ C++ �ύ�л�����5.23 % ���û�*/
//};
//
//
//int main() {
//	Solution b;
//
//}