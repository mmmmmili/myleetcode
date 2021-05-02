//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<queue>
//using namespace std;
//
//class Employee {
//public:
//    int id;
//    int importance;
//    vector<int> subordinates;
//};
//
//
//class Solution {
//public:
//    int getImportance(vector<Employee*> employees, int id) {
//        int size = employees.size();
//        int i = 0, ans = 0;
//        queue<int> q;
//        q.push(id);
//        while (q.empty() == false) {
//            for (int i = 0;i < size;i++) {
//                if (employees[i]->id == q.front()) {
//                    ans += employees[i]->importance;
//                    for (auto item : employees[i]->subordinates) {
//                        q.push(item);
//                    }
//                    q.pop();
//                }
//            }
//        }
//
//        return ans;
//
//    }
//   /* 执行用时：40 ms, 在所有 C++ 提交中击败了54.32 % 的用户
//        内存消耗：13 MB, 在所有 C++ 提交中击败了94.21 % 的用户*/
//};
//
//
//
//int main() {
//    Solution so;
//    Employee a{ 1, 5, {2, 3} };
//    Employee b{ 2, 3,{4} };
//    Employee c{ 3, 4,{} };
//    Employee  d{ 4, 1,{} };
//    vector< Employee*> e ;
//    e.push_back(&a);
//    e.push_back(&b);
//    e.push_back(&c);
//    e.push_back(&d);
//    so.getImportance(e, 1);
//    return 0;
//
//}