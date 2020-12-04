//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<map>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//        vector<int> ans = arr1;
//        map<int, int> hash;
//        for (int i = 0; i < arr2.size(); i++) {
//            hash[arr2[i]] = i;
//        }
//        sort(ans.begin(), ans.end(), [&](int a1, int a2) {
//
//            if (hash.find(a1) != hash.end()) {
//                if (hash.find(a2) != hash.end()) {
//                    return hash[a1] < hash[a2];
//                }
//                else {
//                    return true;
//                }
//            }
//            else {
//                if (hash.find(a2) != hash.end()) {
//                    return false;
//                }
//                else {
//                    return a1 < a2;
//                }
//            }
//
//
//            });
//        return ans;
//    }
//    /*执行用时：16 ms, 在所有 C++ 提交中击败了9.41 % 的用户
//        内存消耗：7.9 MB, 在所有 C++ 提交中击败了12.43 % 的用户*/
//    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//        vector<int> ans = arr1;
//        unordered_map<int, int> hash;
//        for (int i = 0; i < arr2.size(); i++) {
//            hash[arr2[i]] = i;
//        }
//        sort(ans.begin(), ans.end(), [&](int a1, int a2) {
//
//            if (hash.count(a1) !=0) {
//                if (hash.count(a2)) {
//                    return hash[a1] < hash[a2];
//                }
//                else {
//                    return true;
//                }
//            }
//            else {
//                if (hash.count(a2)) {
//                    return false;
//                }
//                else {
//                    return a1 < a2;
//                }
//            }
//
//
//            });
//        return ans;
//    }
//  /*  执行用时：12 ms, 在所有 C++ 提交中击败了22.04 % 的用户
//        内存消耗：8.1 MB, 在所有 C++ 提交中击败了6.61 % 的用户*/
//};
//
//
//int main() {
//    Solution b;
//
//}