//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<map>
//using namespace std;
//
//class po {
//public:
//    bool operator() (int a1,int a2){
//        
//        int s1 = 0, val = a1;
//        while (val != 0) {
//            s1 += val % 2;
//            val = val / 2;
//        }
//        int s2 = 0, val = a2;
//        while (val != 0) {
//            s2 += val % 2;
//            val = val / 2;
//        }
//        if (s1 < s2)return true;
//        if (s1 > s2)return false;
//        return a1 < a2;
//    }
//};
//class Solution {
//public:
//    vector<int> sortByBits(vector<int>& arr) {
//       
//        sort(arr.begin(), arr.end(),po());
//       
//        return arr;
//
//    }/*执行用时：20 ms, 在所有 C++ 提交中击败了71.43 % 的用户
//        内存消耗：10.2 MB, 在所有 C++ 提交中击败了29.52 % 的用户*/
//};
//
//int main() {
//    Solution b;
//    vector<int> a = { 0,1,2,3,4,5,6,7,8 };
//    b.sortByBits(a);
//}