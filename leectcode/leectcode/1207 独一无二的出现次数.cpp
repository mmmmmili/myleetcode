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
//    /*ִ����ʱ��8 ms, ������ C++ �ύ�л�����47.90 % ���û�
//        �ڴ����ģ�8.5 MB, ������ C++ �ύ�л�����14.22 % ���û�*/
//    
//};
//int main() {
//    Solution b;
//
//}