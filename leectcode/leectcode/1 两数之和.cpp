//#include<algorithm>
//#include<iostream>
//#include<string>
//#include<vector>
//#include <unordered_map>
//using namespace std;
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        unordered_map<int, int> hash;
//        int size = nums.size(),temp;
//        for (int i = 0;i < size;i++) {
//            hash[nums[i]] = i;
//        }
//        for (int i = 0;i < size;i++) {
//            temp = hash.count(target - nums[i]);
//            if (temp!=0&&temp!=i) {
//                return { i,hash[target - nums[i]] };
//            }
//        }
//        return {};
//    }
//};
//int main() {
//    Solution b;
//    vector<int> nums{ 2,7,11,15 };
//    b.twoSum(nums, 9);
//    return 0;
//}