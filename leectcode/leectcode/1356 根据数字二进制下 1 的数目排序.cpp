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
//    }/*ִ����ʱ��20 ms, ������ C++ �ύ�л�����71.43 % ���û�
//        �ڴ����ģ�10.2 MB, ������ C++ �ύ�л�����29.52 % ���û�*/
//};
//
//int main() {
//    Solution b;
//    vector<int> a = { 0,1,2,3,4,5,6,7,8 };
//    b.sortByBits(a);
//}