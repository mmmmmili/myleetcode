//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        vector<int> ans = { -1,-1 };
//        int size = nums.size();
//        for (int i = 0; i < size; i++) {
//            if (nums[i] == target) {
//                ans[0] = i;
//                ans[1] = i;
//                for (int j = i+1; j < size; j++) {
//                    if (nums[j] == target) {
//                        ans[1] = j;
//                    }
//                }
//                break;
//            }
//        }
//       
//        return ans;
//    }
//    /*执行用时：16 ms, 在所有 C++ 提交中击败了92.37 % 的用户
//        内存消耗：13.7 MB, 在所有 C++ 提交中击败了28.05 % 的用户*/
//
//
//    vector<int> searchRange(vector<int>& nums, int target) {
//        vector<int> ans = { -1,-1 };
//        int size = nums.size(),mid;
//        int low = 0, high = size - 1;
//        while (low <= high) {
//            /* 找到目标值 target 时，不立即返回，缩小搜索区间的上界 high ，不断向左收缩，锁定左侧边界*/
//            /*这个是找左区间*/
//            mid = (low + high) / 2;
//            if (nums[mid] < target) {
//                low = mid + 1;
//            }
//            else if (nums[mid]==target) {
//                high = mid - 1;///这个
//            }
//            else {
//                high = mid - 1;
//            }
//        }
//        /* 循环结束条件 low = high + 1 ，由于 low 的取值范围是 [0, numsSize]，如果目标值 target
//      比所有数都大或者没被找到(例如在数组 [5,7,7,8,8,10] 中查找 11 或 6)，返回 -1 */
//
//      
//        if (low == size || nums[low] != target) {
//
//        }
//        else {
//            ans[0] = low;
//        }
//        
//
//
//        low = 0, high = size - 1;
//        while (low <= high) {
//            //在找到目标值 target 时，不立即返回，增大搜索区间的下界 high ，不断向右收缩，最后达到锁定右侧边界目的。
//            mid = (low + high) / 2;
//            if (nums[mid] < target) {
//                low = mid + 1;
//            }
//            else if (nums[mid] == target) {
//                low = mid + 1;;///这个
//            }
//            else {
//                high = mid - 1;
//            }
//        }
//
//        if (high<0 || nums[high] != target) {
//
//        }
//        else {
//            ans[1] = high;
//        }
//      
//        return ans;
//    }
//   /* 执行用时：16 ms, 在所有 C++ 提交中击败了92.37 % 的用户
//        内存消耗：13.6 MB, 在所有 C++ 提交中击败了37.81 % 的用户*/
//};
//
//
//int main() {
//    Solution b;
//
//}