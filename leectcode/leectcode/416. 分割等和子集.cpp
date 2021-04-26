//#include<algorithm>
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//	bool canPartition1(vector<int> nums) {
//		int ans = 0;
//		for (auto item : nums) {
//			ans += item;
//		}
//		if (ans % 2 == 1)return false;
//		ans = ans / 2;
//		int size = nums.size();
//		if (size == 1)return false;
//
//		vector<vector<bool>> dp(size, vector<bool>(ans + 1, false));
//		// dp[i][j]表示从数组的 [0,i]下标范围内选取多个正整数能否取值为j
//
//		for (int i = 0;i < size;i++) { dp[i][0] = true; };
//		if (nums[0] <= ans) {
//			dp[0][nums[0]] = true;
//		}
//		else {
//			return false;
//		}
//
//		for (int i = 1;i < size;i++) {
//			for (int j = 1;j < ans + 1;j++) {
//				if (j - nums[i] >= 0) {
//					dp[i][j] = dp[i - 1][j] | dp[i - 1][j - nums[i]];
//				}
//				else {
//					dp[i][j] = dp[i - 1][j];
//				}
//			}
//		}
//		return dp[size - 1][ans];
//
//	}
//	/*执行用时：364 ms, 在所有 C++ 提交中击败了14.45 % 的用户
//		内存消耗：11.5 MB, 在所有 C++ 提交中击败了48.23 % 的用户*/
//
//	bool canPartition(vector<int> nums) {
//		int ans = 0;
//		for (auto item : nums) {
//			ans += item;
//		}
//		if (ans % 2 == 1)return false;
//		ans = ans / 2;
//		int size = nums.size();
//		if (size == 1)return false;
//
//		 vector<bool> dp(ans + 1, false);
//		// dp[i][j] 表示从数组的 [0,i]下标范围内选取多个正整数能否取值为j
//		 dp[0] = true;
//		 if (nums[0] <= ans) {
//			 dp[nums[0]] = true;
//		 }
//		 else {
//			 return false;
//		 }
//		 //需要注意的是第二层的循环我们需要从大到小计算，因为如果我们从小到大更新 dp 值，那么在计算 dp[j]值的时候，
//			 //dp[j−nums[i]]已经是被更新过的状态，不再是上一行的dp 值。
//
//		for (int i = 1;i < size;i++) {
//			for (int j = ans;j>= nums[i];j--) {		
//					dp[j] = dp[j] | dp[j - nums[i]];
//				
//			}
//		}
//		return dp[ans];
//		/*执行用时：228 ms, 在所有 C++ 提交中击败了59.30 % 的用户
//			内存消耗：9 MB, 在所有 C++ 提交中击败了74.94 % 的用户*/
//
//	}
//};
//int main() {
//	Solution b;
//	b.canPartition({ 1,2,5 });
//}