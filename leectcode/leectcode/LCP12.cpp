//#include<iostream>
//#include<set>
//#include <unordered_set>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//    int minTime(vector<int>& time, int m) {
//        float sum = 0;
//        for (auto a : time) {
//            sum += a;
//        }
//        int left = 0, right = sum, mid = (left + right) / 2;
//
//        while (left != right) {
//            if (isOK(time, m, mid)) {
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
//
//    bool isOK(vector<int>& nums, int m, int sumNumber) {
//        int  cnt = 0, sum = 0,maxItem=0;
//        //i是组号，j是下标
//        for (int j=0; j < nums.size(); j++) {
//            sum += nums[j];
//            maxItem = max(maxItem, nums[j]);
//            if (sum - maxItem> sumNumber) {
//                sum = nums[j];
//                maxItem = nums[j];
//                cnt++;
//            }
//        }
//        if (cnt < m)return true;
//        return false;
//    }
//    /*执行用时：164 ms, 在所有 C++ 提交中击败了90.58 % 的用户
//        内存消耗：28.5 MB, 在所有 C++ 提交中击败了25.40 % 的用户*/
//};
//int main() {
//
//}