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
//	/*ִ����ʱ��736 ms, ������ C++ �ύ�л�����5.60 % ���û�
//		�ڴ����ģ�9.1 MB, ������ C++ �ύ�л�����20.68 % ���û�*/
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
//	/*ִ����ʱ��288 ms, ������ C++ �ύ�л�����35.31 % ���û�
//		�ڴ����ģ�6.8 MB, ������ C++ �ύ�л�����35.13 % ���û�*/
//};
//
//int main() {
//	Solution b;
//
//}