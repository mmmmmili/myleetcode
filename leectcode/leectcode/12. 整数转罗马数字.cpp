//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
////I             1
////V             5
////X             10
////L             50
////C             100
////D             500
////M             1000
//class Solution {
//public:
//	string intToRoman(int num) {
//		string ans;
//		int temp;
//		if (num > 999) {
//			temp = num / 1000;
//			num = num % 1000;
//			switch (temp) {
//			case 1:
//				ans += "M";
//				break;
//			case 2:
//				ans += "MM";
//				break;
//			case 3:
//				ans += "MMM";
//				break;
//			default:
//				break;
//
//			}
//		}
//		if (num > 99) {
//			temp = num / 100;
//			num = num % 100;
//			switch (temp) {
//			case 1:
//				ans += "C";
//				break;
//			case 2:
//				ans += "CC";
//				break;
//			case 3:
//				ans += "CCC";
//				break;
//			case 4:
//				ans += "CD";
//				break;
//			case 5:
//				ans += "D";
//				break;
//			case 6:
//				ans += "DC";
//				break;
//			case 7:
//				ans += "DCC";
//				break;
//			case 8:
//				ans += "DCCC";
//				break;
//			case 9:
//				ans += "CM";
//				break;
//			default:
//				break;
//			}
//		}
//		if (num > 9) {
//			temp = num / 10;
//			num = num % 10;
//			switch (temp) {
//			case 1:
//				ans += "X";
//				break;
//			case 2:
//				ans += "XX";
//				break;
//			case 3:
//				ans += "XXX";
//				break;
//			case 4:
//				ans += "XL";
//				break;
//			case 5:
//				ans += "L";
//				break;
//			case 6:
//				ans += "LX";
//				break;
//			case 7:
//				ans += "LXX";
//				break;
//			case 8:
//				ans += "LXXX";
//				break;
//			case 9:
//				ans += "XC";
//				break;
//			default:
//				break;
//			}
//		}
//		if (num > 0) {
//			switch (num) {
//			case 1:
//				ans += "I";
//				break;
//			case 2:
//				ans += "II";
//				break;
//			case 3:
//				ans += "III";
//				break;
//			case 4:
//				ans += "IV";
//				break;
//			case 5:
//				ans += "V";
//				break;
//			case 6:
//				ans += "VI";
//				break;
//			case 7:
//				ans += "VII";
//				break;
//			case 8:
//				ans += "VIII";
//				break;
//			case 9:
//				ans += "X";
//				break;
//			default:
//				break;
//			}
//		}return ans;
//	}
//	/*执行用时：8 ms, 在所有 C++ 提交中击败了68.42 % 的用户
//		内存消耗：5.8 MB, 在所有 C++ 提交中击败了79.06 % 的用户*/
//};
//
//
//
//int main() {
//	Solution b;
//	b.intToRoman(3);
//}