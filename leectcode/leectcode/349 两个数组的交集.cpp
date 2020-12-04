//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//        unordered_set<int> hash,check;
//        for (auto& i: nums1) {
//            hash.insert(i);
//        }
//        vector<int> ans;
//        for (auto& i : nums2) {
//            if (hash.count(i)&&!check.count(i)) {
//                check.insert(i);
//                ans.push_back(i);
//            }
//        }
//        return ans;
//    }
//    //执行用时：12 ms, 在所有 C++ 提交中击败了74.83% 的用户
//   // 内存消耗：10.7 MB, 在所有 C++ 提交中击败了12.49 % 的用户
//        //用了两个哈希表
//};
//
//
//int main() {
//    Solution b;
//
//}