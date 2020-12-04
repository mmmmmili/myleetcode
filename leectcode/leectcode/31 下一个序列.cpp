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
//    void nextPermutation(vector<int>& nums) {
//        int size = nums.size(), flag = 0;
//        for (int i = size - 2; i >= 0; i--) {
//            if (nums[i + 1] >nums[i]) {
//                int tempIndex = i;//找出比nums[i]大的最小的值，就是nums[i]的后继，此时的i到size-1必须满足一个山峰，就是 7 98765 这样的形式
//                for (int j = i; j < size; j++) {
//                    if (nums[j] > nums[i]) {
//                        tempIndex = j;
//                    }
//                    
//                }
//                swap(nums[i], nums[tempIndex]);
//                sort(nums.begin() + i + 1, nums.end());
//                return;
//            }
//
//
//        }
//        sort(nums.begin(), nums.end());
//        return;
//    }
//   /* 执行用时：0 ms, 在所有 C++ 提交中击败了100.00 % 的用户
//        内存消耗：12 MB, 在所有 C++ 提交中击败了44.26 % 的用户*/
//};
//
//int main() {
//    Solution b;
//    vector<int> a = {2,3,1};
//    b.nextPermutation(a);
//}