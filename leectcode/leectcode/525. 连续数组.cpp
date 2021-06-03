//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//
//class Solution {
//public:
//    //呃理解错题目意思呜呜呜，我以为是连续的
//    //int findMaxLength(vector<int>& nums) {
//    //    int size = nums.size();
//    //    vector<vector<int>> dp(size, vector<int>(2, 0));
//    //    //dp[i][0]是目前为止离得最近的0的连续序列的0的个数
//    //    //dp[i][1]是目前为止离得最近的0的连续序列的0的个数
//    //    int flag = nums[0];
//    //    //flag指上一个是0还是1
//    //    dp[0][flag] = 1;
//    //    for (int i = 1; i < size; i++) {
//    //        if (flag == nums[i]) {
//    //            dp[i][nums[i]] = dp[i - 1][nums[i]]++;
//    //            dp[i][abs(nums[i] - 1)]=dp[i - 1][abs(nums[i] - 1)];
//    //        }
//    //        else {
//    //            flag =nums[i];
//    //            dp[i][nums[i]] = 1;
//    //            dp[i][abs(nums[i] - 1)] = dp[i - 1][abs(nums[i] - 1)];
//    //        }     
//    //    }
//    //    for (int i = 0; i < size; i++) {
//    //        flag = min(flag,min(dp[i][0], dp[i][1]));
//    //    }
//    //    return flag*2;
//
//    //}
//    //int findMaxLength(vector<int>& nums) {
//    //    int size = nums.size();
//    //    vector<vector<int>> dp(size, vector<int>(2, 0));
//    //    //dp[i][0]是目前为止离得最近的0的连续序列的0的个数
//    //    //dp[i][1]是目前为止离得最近的0的连续序列的0的个数
//    //    int flag = 1;
//    //    //flag指上一个是0还是1
//    //    dp[0][nums[0]] = 1;
//    //    for (int i = 1; i < size; i++) {
//
//    //        dp[i][nums[i]] = dp[i - 1][nums[i]]+1;
//    //        dp[i][abs(nums[i] - 1)] = dp[i - 1][abs(nums[i] - 1)];
//
//    //    }
//    //    for (int i = 0; i < size; i++) {
//    //        flag = max(flag, min(dp[i][0], dp[i][1]));
//    //    }
//    //    return flag * 2;
//
//    //}
//    int findMaxLength(vector<int>& nums) {
//        int size = nums.size();
//        unordered_map<int, int> hash;
//        int sum = 0,ans=0;
//        hash[sum] = -1;
//        for (int i=0; i < size; i++) {
//            if (nums[i] == 0)sum -= 1;
//            else {
//                sum += 1;
//            }
//            if (hash.count(sum) != 0)ans = max(ans, i - hash[sum]);
//            else {
//                hash[sum] = i;
//            }
//        }
//        return ans;
//
//    }/*执行用时：176 ms, 在所有 C++ 提交中击败了21.80% 的用户
//内存消耗：81.7 MB, 在所有 C++ 提交中击败了31.69% 的用户*/
//};
//
//int main() {
//    Solution b;
//// vector<vector<int>> a{ {1,2},{2,3},{3,4},{1,3} };
//    vector<int > c{ 0,1,1,0,1,1,1,0
//    };
//    b.findMaxLength(c);
////b.eraseOverlapIntervals(a);
//return 0;
//
//}