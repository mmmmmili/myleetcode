//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include <vector>
//using namespace std;
//
//
//
//class Solution {
//public:
//
//    bool isMagic(vector<int>& target) {
//        vector<int> temp;
//        int size = target.size();
//        for (int i = 1; i <= size; i++) {
//            temp.push_back(i);
//        }
//        vector<int> temp2 = reorder(temp);
//        int i = findMaxSame(target, temp2);
//        if (i == 0)return false;
//        for (; i <= size; i++) {
//
//            int index = 0, flag = 1;
//            vector<int> temp2 = temp;
//            while (index < size && flag == 1) {
//                temp2 = reorder(temp2);
//                for (int j = 0; j < i && index < size; j++) {
//                    if (temp2[j] != target[index++]) {
//                        flag = 0;
//                        break;
//                    }
//
//                }
//                if (flag == 1) {
//                    for (int j = 0; j < i; j++) {
//                        if (temp2.size() < i)break;
//                        else if (temp2.size() != 0) {
//                            temp2.erase(temp2.begin());
//                        }
//                    }
//                }
//            }
//            if (flag == 1)return true;
//        }
//        return false;
//    }
//    int findMaxSame(vector<int>& t1, vector<int>& t2) {
//        int size1 = t1.size(), size2 = t2.size(), i = 0, j = 0;
//        while (i < size1 && j < size2) {
//            if (t1[i++] != t2[j++])return i - 1;
//        }
//        return i - 1;
//    }
//    vector<int> reorder(vector<int>& temp) {
//        vector<int> temp2;
//        for (int i = 1; i < temp.size(); i = i + 2) {
//            temp2.push_back(temp[i]);
//        }
//        for (int i = 0; i < temp.size(); i = i + 2) {
//            temp2.push_back(temp[i]);
//        }
//
//        return temp2;
//    }
//    /* 执行用时：1816 ms, 在所有 C++ 提交中击败了5.23 % 的用户
//         内存消耗：311.2 MB, 在所有 C++ 提交中击败了5.22 % 的用户*/
//};
//int main() {
//    Solution b;
//    vector<int> a{ 5,4,3,2,1 };
//    b.isMagic(a);
//}