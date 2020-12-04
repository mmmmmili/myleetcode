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
//    void moveZeroes(vector<int>& nums) {
//        int size = nums.size(), b = size;
//        for (int i = 0; i < size; i++) {
//            if (nums[i] == 0) {
//                b = i;
//                break;
//            }
//        }
//        for (int i = 0; i < size; i++) {
//            if (nums[i] != 0 && i > b) {
//                nums[b] = nums[i];
//                b++;
//            }
//        }
//        for (int i = b; i < size; i++) {
//            nums[i] = 0;
//        }
//        return;
//
//
//    }/*执行用时：8 ms, 在所有 C++ 提交中击败了91.02 % 的用户
//        内存消耗：9.2 MB, 在所有 C++ 提交中击败了19.35 % 的用户*/
//};
//
//int main() {
//    Solution b;
//
//}