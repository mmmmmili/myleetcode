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
//	int uniquePaths(int m, int n) {
//		long long a = 1,  b= 1;
//		if (m < n)swap(m, n);
//		for (long i = 1; i <= n - 1; i++) {
//			a = a * i;
//		}
//
//		for (long i = m + n - 2, j = 0; j < n - 1; j++,i--) {
//			b = b * i;
//		}
//		cout << a << " " << b;
//		return b / a;
//		/*执行用时：0 ms, 在所有 C++ 提交中击败了100.00 % 的用户
//			内存消耗：6.2 MB, 在所有 C++ 提交中击败了69.96 % 的用户*/
//	}
//	int uniquePaths(int m, int n) {
//		long  b = 1;
//		if (m < n)swap(m, n);
//		
//		for (long i = m + n - 2, j = 1; j <= n - 1; j++, i--) {
//			b = b * i/j;
//		}
//		return b;
//		
//	/*	执行用时：4 ms, 在所有 C++ 提交中击败了31.28 % 的用户
//			内存消耗：6.2 MB, 在所有 C++ 提交中击败了67.56 % 的用户*/
//	}
//	int uniquePaths(int m, int n) {
//		int** a = new int* [m];
//		for (int i = 0; i < m; i++) {
//			a[i] = new int[n];
//		}
//		for (int i = 0; i < m; i++) {
//			a[i][0] = 1;
//		}for (int j = 0; j < n; j++) {
//			a[0][j] = 1;
//		}for (int i = 1; i < m; i++) {
//			for (int j = 1; j < n; j++) {
//				a[i][j] = a[i - 1][j] + a[i][j - 1];
//			}
//		}
//		int ans = a[m - 1][n - 1];
//		for (int i = 0; i < m; i++) {
//			delete []a[i];
//		}
//		delete[]a;
//		return ans;
//	}
//	//dp
//	//执行用时：4 ms, 在所有 C++ 提交中击败了31.28% 的用户
//	//内存消耗：6.5 MB, 在所有 C++ 提交中击败了32.37 % 的用户
//};
//
//int main() {
//	//Solution b;
//	//b.uniquePaths(10,10);
//	long long a = 1;
//	for (long i = 1; i <= 9; i++) {
//		a = a * i;
//	}
//	long long b = 1;
//
//	for (long i = 18, j = 0; j < 9; j++, i--) {
//		b = b * i;
//
//	}
//	cout << a << endl << b << endl << b / a << endl;
//
//}