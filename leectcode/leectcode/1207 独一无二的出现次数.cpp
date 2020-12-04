//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<map>
//#include<set>
//#include<vector>
//using namespace std;
//
//
//
//class Solution {
//public:
//    
//    bool uniqueOccurrences(vector<int>& arr) {      
//        map<int, int> m;
//        set<int> s;
//        for (int& i : arr) {
//            if (m.find(i) == m.end())m[i] = 1;
//            else {
//                m[i]++;
//            }
//        }
//        for (auto& item : m) {
//            if (s.find(item.second) == s.end())s.insert(item.second);
//            else {
//                return false;
//            }
//        }   
//        return true;
//    }
//    /*执行用时：8 ms, 在所有 C++ 提交中击败了47.90 % 的用户
//        内存消耗：8.5 MB, 在所有 C++ 提交中击败了14.22 % 的用户*/
//    
//};
//int main() {
//    Solution b;
//
//}