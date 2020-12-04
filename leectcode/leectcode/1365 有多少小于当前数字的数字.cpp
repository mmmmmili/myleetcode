//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<map>
//#include<unordered_map>
//using namespace std;
//
//
//
//class Solution {
//public:
//    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//        vector<int> ans;
//        map<int, int> hash;
//        int size = nums.size();
//        for (int i = 0; i < size; i++) {
//            if (hash.count(nums[i]) == 0)hash[nums[i]] = 1;
//            else {
//                ++hash[nums[i]];
//            }
//        }
//       
//        int temp = 0,pre=0;//temp暂存当前大小，pre比这个数还小的数组长度
//        for (auto & item:hash) {
//            temp = item.second;
//            item.second = pre;
//            pre += temp;
//        }
//
//        for (int i = 0; i < size; i++) {
//            ans.push_back(hash[nums[i]]);
//        }
//   
//        return ans;
//    }
//
//    
//};
//int main() {
//    Solution b;
//    vector<int> a = {8,1,2,2,3 };
//    b.smallerNumbersThanCurrent(a);
//}