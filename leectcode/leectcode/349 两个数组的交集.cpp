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
//    //ִ����ʱ��12 ms, ������ C++ �ύ�л�����74.83% ���û�
//   // �ڴ����ģ�10.7 MB, ������ C++ �ύ�л�����12.49 % ���û�
//        //����������ϣ��
//};
//
//
//int main() {
//    Solution b;
//
//}