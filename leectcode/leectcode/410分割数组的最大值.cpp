//#include<iostream>
//#include<set>
//#include <unordered_set>
//#include <vector>
//#include<math.h>
//using namespace std;
//class Solution {
//public:
//    int splitArray(vector<int>& nums, int m) {
//        float sum = 0, reduce_max = 0;
//        for (auto a : nums) {
//            if (reduce_max < a)reduce_max = a;
//            sum += a;
//        }
//        int left = reduce_max, right = sum, mid = (left + right) / 2;
//
//        while (left != right) {
//            if (isOK(nums, m, mid)) {
//                right = mid;
//                mid = (left + right) / 2;
//            }
//            else {
//                left = mid + 1;/////////////////意外的这一步比较重要
//                mid = (left + right) / 2;
//            }
//        }
//        return mid;
//    }
//    bool isOK(vector<int>& nums, int m, int sumNumber) {
//        int j = 0, cnt = 0, sum = 0;
//        //i是组号，j是下标
//        for (; j < nums.size(); j++) {
//            if (sum + nums[j] > sumNumber) {
//                sum = nums[j];
//                cnt++;
//            }
//            else {
//                sum += nums[j];
//            }
//        }
//        if (cnt < m)return true;
//        return false;
//    }
//};
////执行用时：4 ms, 在所有 C++ 提交中击败了76.01 % 的用户
////内存消耗：7 MB, 在所有 C++ 提交中击败了63.64 % 的用户
//int main() {
//    vector<int> a = {2,3,1,1,1,1,1};
//    Solution solution;
//    cout<<solution.splitArray(a, 5);
//    return 0;
//}