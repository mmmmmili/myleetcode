//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
//        unordered_map<int,int>a,b;
//        for (int i = 0; i < A.size(); i++) {
//            for (int j = 0; j < B.size(); j++) {
//               
//                    a[A[i] + B[j] ]++;
//                
//            }
//        }
//        for (int j = 0; j <C.size(); j++) {
//            for (int k = 0; k < D.size(); k++) {
//                b[C[j]+  D[k]]++;
//            }
//        }
//        int cnt = 0, temp = 0;
//        for (auto& item : a) {
//            if ((temp=b[-item.first])!=0)
//                cnt += item.second*temp;
//        }
//        return cnt;
//    }/*ִ����ʱ��788 ms, ������ C++ �ύ�л�����15.39 % ���û�
//        �ڴ����ģ�63.4 MB, ������ C++ �ύ�л�����5.01 % ���û�*/
//};
//
//
//int main() {
//    Solution h;
//    vector<int> a{-1,-1}, b{-1,1}, c{-1,1}, d{1,-1};
//   int x=h.fourSumCount(a, b, c, d);
//}