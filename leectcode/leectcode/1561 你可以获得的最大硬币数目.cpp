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
//    int maxCoins(vector<int>& piles) {
//        sort(piles.begin(), piles.end(),greater<>());
//        int n = piles.size() / 3*2;
//        int sum = 0;
//        for (int i = 1; i < n; i=i+2) {
//            sum += piles[i];
//        }
//        return sum;
//    }
//    /*ִ����ʱ��536 ms, ������ C++ �ύ�л�����6.78 % ���û�
//        �ڴ����ģ�52.7 MB, ������ C++ �ύ�л�����9.60 % ���û�*/
//};
//
//int main() {
//    Solution b;
//    vector<int> a({ 2,4,1,2,7,8
//        });
//    b.maxCoins(a);
//}