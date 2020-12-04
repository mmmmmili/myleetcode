//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<queue>
//using namespace std;
//
//
//class Solution {
//public:
//    string reorganizeString(string S) {
//        int data[26] = { 0 };
//        int size = S.size();
//        for (int i = 0; i < size; i++) {
//            data[S[i] - 'a']++;
//        }
//        for (int i = 0; i < 26; i++) {
//            if (size - data[i] + 1 < data[i]) {
//                return "";
//            }
//        }
//        string ans = "";
//        int i = 0,pre=-1;
//        for (int i = 0; i < size-1; i++) {
//            if (S[i] == S[i + 1]) {
//                for (int j = i + 2; j < size; j++) {
//                    if (S[j] != S[i]) {
//                        swap(S[i + 1], S[j]);
//                        break;
//                    }
//                }
//           }
//        }
//      
//        return ans;
//
//    }
//   /* 执行用时：0 ms, 在所有 C++ 提交中击败了100.00 % 的用户
//        内存消耗：6.5 MB, 在所有 C++ 提交中击败了28.54 % 的用户*/
//
//    string reorganizeString2(string S) {
//        int data[26] = { 0 };
//        int size = S.size();
//        for (int i = 0; i < size; i++) {
//            data[S[i] - 'a']++;
//        }
//        for (int i = 0; i < 26; i++) {
//            if (size - data[i] + 1 < data[i]) {
//                return "";
//            }
//        }
//        auto cmp = [&](const int& i, const int& j) {
//            return data[i] < data[j];
//        };
//        priority_queue<int,vector<int>,decltype(cmp) > heap(cmp);
//        //////// heap(cmp);
//        ///////https://blog.csdn.net/liu2012huan/article/details/52932494
//
//        //lambda 函数来初始化函数对象
//        //priority_queue<int,vector<int>,function<bool(const int&, const int&)>> heap(cmp);
//        //priority_queue<student, vector<student>, function<bool(const student&, const student&)>> que5(cmp);
//
//        ////函数指针来初始化函数对象
//        //priority_queue<student, vector<student>, function<bool(const student&, const student&)>> que6(cmpfunc);
//        for (int i = 0; i < 26; i++) {
//            if (data[i] !=0) {
//                heap.push(i);
//            }
//        }
//        int temp1, temp2;
//        string ans;
//        temp1 = heap.top();
//        heap.pop();
//        ans += temp1 + 'a';
//        --data[temp1];
//        heap.push(temp1);
//
//        for (int i = 1; i < size; i++) {
//            temp2 = heap.top();
//            heap.pop();
//            if (temp2 == temp1) {
//                temp2 = heap.top();
//                heap.pop();
//                heap.push(temp1);
//            }
//            ans += temp2 + 'a';
//            --data[temp2];
//            heap.push(temp2);
//            temp1 = temp2;
//        }
//        return ans;
//
//    }
//    /*执行用时：4 ms, 在所有 C++ 提交中击败了66.46 % 的用户
//        内存消耗：6.5 MB, 在所有 C++ 提交中击败了34.09 % 的用户*/
//
//
//};
//
//int main() {
//    Solution b;
//    b.reorganizeString("vvvlo");
//    b.reorganizeString2("vvvlo");
//
//}