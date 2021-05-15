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
//	int romanToInt(string s) {
//		int ans = 0;
//		int size = s.length();
//		for (int i = 0; i < size; i++) {
//			switch (s[i]) {
//			case 'M':
//				if (i + 2 < size && s[i + 1] == 'M' && s[i + 2] == 'M') {
//					ans += 3000;
//					i = i + 2;
//				}
//				else if (i + 1 < size && s[i + 1] == 'M') {
//					ans += 2000;
//					i++;
//				}
//				else
//					ans += 1000;
//				break;
//			case 'C':
//				if (i + 2 < size && s[i + 1] == 'C' && s[i + 2] == 'C') {
//					ans += 300;
//					i = i + 2;
//				}
//				else if (i + 1 < size&&(s[i + 1] == 'C'|| s[i + 1] == 'M'|| s[i + 1] == 'D')) {
//					if (s[i + 1] == 'C') { ans += 200; ++i; }
//					else if (s[i + 1] == 'M') { ans += 900; ++i; }
//					else if (s[i + 1] == 'D') { ans += 400; ++i; }
//				}
//				else
//					ans += 100;
//				break;
//			case 'D':
//				if (i + 3 < size && s[i + 1] == 'C' && s[i + 2] == 'C' && s[i + 3] == 'C') {
//					ans += 800;
//					i = i + 3;
//				}
//				else if (i + 2 < size && s[i + 1] == 'C' && s[i + 2] == 'C') {
//					ans += 700;
//					i = i + 2;
//				}
//				else if (i + 1 < size && s[i + 1] == 'C') {
//					ans += 600;
//					++i;
//				}
//				else
//					ans += 500;
//				break;
//			case 'X':
//				if (i + 2 < size && s[i + 1] == 'X' && s[i + 2] == 'X') {
//					ans += 30;
//					i = i + 2;
//				}
//				else if (i + 1 < size && (s[i + 1] == 'C' || s[i + 1] == 'X' || s[i + 1] == 'L')) {
//					if (s[i + 1] == 'X') { ans += 20; ++i; }
//					else if (s[i + 1] == 'C') { ans += 90; ++i; }
//					else if (s[i + 1] == 'L') { ans += 40; ++i; }
//				}
//				else
//					ans += 10;
//				break;
//			case 'L':
//				if (i + 3 < size && s[i + 1] == 'X' && s[i + 2] == 'X' && s[i + 3] == 'X') {
//					ans += 80;
//					i = i + 3;
//				}
//				else if (i + 2 < size && s[i + 1] == 'X' && s[i + 2] == 'X') {
//					ans += 70;
//					i = i + 2;
//				}
//				else if (i + 1 < size && s[i + 1] == 'X') {
//					ans += 60;
//					++i;
//				}
//				else
//					ans += 50;
//				break;
//			case 'V':
//				if (i + 3 < size && s[i + 1] == 'I' && s[i + 2] == 'I' && s[i + 3] == 'I') {
//					ans += 8;
//					i = i + 3;
//				}
//				else if (i + 2 < size && s[i + 1] == 'I' && s[i + 2] == 'I') {
//					ans += 7;
//					i = i + 2;
//				}
//				else if (i + 1 < size && s[i + 1] == 'I') {
//					ans += 6;
//					++i;
//				}
//				else
//					ans += 5;
//				break;
//			case 'I':
//				if (i + 2 < size && s[i + 1] == 'I' && s[i + 2] == 'I') {
//					ans += 3;
//					i = i + 2;
//				}
//				else if (i + 1 < size && (s[i + 1] == 'I' || s[i + 1] == 'X' || s[i + 1] == 'V')) {
//					if (s[i + 1] == 'I') { ans += 2; ++i; }
//					else if (s[i + 1] == 'X') { ans += 9; ++i; }
//					else if (s[i + 1] == 'V') { ans += 4; ++i; }					
//				}
//				else
//					ans += 1;
//				break;
//			default:
//				break;
//			}
//		}
//		
//		return ans;
//	}
//};
////执行用时：8 ms, 在所有 C++ 提交中击败了81.06 % 的用户
////内存消耗：5.6 MB, 在所有 C++ 提交中击败了100.00 % 的用户
//int main() {
//    Solution b;
//
//}