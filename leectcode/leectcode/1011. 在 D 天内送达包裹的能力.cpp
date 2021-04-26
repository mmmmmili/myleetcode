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
//    int shipWithinDays(vector<int>& weights, int D) {
//        int maxWeight = INT_MIN, sum = 0, mid = 0;
//        for (auto item : weights) {
//            maxWeight = max(maxWeight, item);
//            sum += item;
//        }
//        while (maxWeight < sum) {
//            mid = (maxWeight + sum) / 2;
//            if (isCutOk(weights, D, mid))sum = mid;
//            else {
//                maxWeight = mid+1;
//            }
//        }
//        return maxWeight;
//       /* 执行用时：48 ms, 在所有 C++ 提交中击败了84.88 % 的用户
//            内存消耗：25.4 MB, 在所有 C++ 提交中击败了78.83 % 的用户*/
//    }
//    bool isCutOk(vector<int>& weights, int D, int k) {
//        int day = 0, sum = 0;
//        for (auto item : weights) {
//            if (sum+item > k) {
//                ++day;
//                sum = 0;
//            }
//            sum += item;
//        }
//        ++day;
//        if (day <= D)return true;
//        else {
//            return false;
//        }
//    }
//};
//
//int main() {
//    Solution b;
//    vector<int> a{ 1,2,3,4,5,6,7,8,9,10 };
//    b.shipWithinDays(a, 5);
//    return 0;
//}