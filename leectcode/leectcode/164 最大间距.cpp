//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<queue>
//using namespace std;
//
//
//class Solution {
//public:
//    int maximumGap(vector<int>& nums) {
//        if (nums.size() == 0)return 0;
//        sort(nums.begin(), nums.end());
//        int sum = 0;
//        for (int i = 0; i < nums.size() - 1; i++) {
//            sum = nums[i + 1] - nums[i] > sum ? nums[i + 1] - nums[i] : sum;
//
//        }
//        return sum;
//
//    }
//};/* 执行用时：16 ms, 在所有 C++ 提交中击败了50.11 % 的用户
//内存消耗：8.7 MB, 在所有 C++ 提交中击败了68.39 % 的用户*/
//
//
//
//
//int main() {
//    Solution b;
//    Solution1 c;
//    c.translateNum(25);
//}