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
//    int findMaximumXOR(vector<int> nums) {
//        int size = nums.size();
//        int ans = INT_MIN;
//        for (int i = 0; i < size; i++) {
//            for (int j = 0; j < size; j++) {
//                if ((nums[i] ^ nums[j]) > ans) {
//                    ans = nums[i] ^ nums[j];
//                }
//            }
//        }
//        return ans;
//
//    }
//};
//
//int main() {
//    Solution b;
//    b.findMaximumXOR({ 2, 4 });
//
//}