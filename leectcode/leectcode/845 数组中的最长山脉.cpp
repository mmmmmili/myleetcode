//
//#include<iostream>
//#include<stack>
//#include<vector>
//#include <algorithm>
//#include<math.h>
//using namespace std;
//
//
//
//class Solution {
//public:
//    int longestMountain(vector<int>& A) {
//        int size = A.size();
//        if (size == 0)return 0;
//
//
//        int maxLength = 0;
//        int tempLength = 1;
//        bool isUp = true;
//        //true��������false���½�
//        
//
//        vector<int> recordFirst;
//        for (int i = 0; i < size - 2; i++) {
//            if (A[i] < A[i + 1]&&A[i+1]!=A[i+2])recordFirst.push_back(i);
//        }
//        int recordFirstSize = recordFirst.size();
//        for (int i = 0; i < recordFirstSize;i++) {
//            tempLength = 1;
//            isUp = true;
//            int pre = A[recordFirst[i]];
//            for (int j = recordFirst[i]+1; j < size; j++) {
//                if (isUp) {
//                    if (A[j] > pre) {
//                        tempLength++;
//                        pre=A[j];
//                    }
//                    else if (A[j] < pre && tempLength>1) {
//
//                        tempLength++;
//                        pre = A[j];
//                        isUp = false;
//                        maxLength = max(maxLength, tempLength);
//                    }
//                    else {
//                        break;
//                    }
//                }
//                else {
//                    if (A[j] < pre) {
//                        tempLength++;
//                        pre = A[j];
//                        maxLength = max(maxLength, tempLength);
//                    }
//                    else { 
//                        maxLength = max(maxLength, tempLength);
//                        break;
//                    }
//                }
//            }
//        }        
//        return maxLength > 2 ? maxLength : 0;
//    }
//    /*ִ����ʱ��1064 ms, ������ C++ �ύ�л�����5.09 % ���û�
//        �ڴ����ģ�18.9 MB, ������ C++ �ύ�л�����6.61 % ���û�*/
//};
//int main() {
//    Solution b;
//    vector<int> a1 = { 0,1,0
//    };
//    b.longestMountain(a1);
//}