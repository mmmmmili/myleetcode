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
//    vector<int> decode(vector<int>& encoded, int first) {
//        int size = encoded.size();
//        vector<int> ans(size + 1, first);
//        for (int i = 0; i < size; i++) {
//            ans[i + 1] = ans[i] ^ encoded[i];
//        }
//        return ans;
//        /*ִ����ʱ��24 ms, ������ C++ �ύ�л�����95.99 % ���û�
//            �ڴ����ģ�24.3 MB, ������ C++ �ύ�л�����60.76 % ���û�*/
//    }
//};
//int main() {
//    Solution b;
//
//}