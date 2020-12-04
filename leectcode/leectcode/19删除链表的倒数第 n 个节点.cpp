//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//using namespace std;
//
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
//
//class Solution {
//public:
//    ListNode* removeNthFromEnd1(ListNode* head, int n) {
//
//        stack<ListNode*> temp;
//        ListNode* p = head;
//        while (p != nullptr) {
//            temp.push(p);
//            p = p->next;
//        }
//        while (n-- > 0) {
//            temp.pop();
//        }
//        if (temp.size() == 0) {
//            p = head;
//            head = head->next;
//            return head;
//        }
//        p = temp.top()->next;
//        temp.top()->next = p->next;
//        delete p;
//        return head;
//       /* 执行用时：8 ms, 在所有 C++ 提交中击败了54.31 % 的用户
//            内存消耗：11 MB, 在所有 C++ 提交中击败了5.05 % 的用户*/
//    }
//    ListNode* removeNthFromEnd2(ListNode* head, int n) {
//
//        ListNode* temp = new ListNode(0, head);
//        ListNode* fast = temp,* low = temp;
//        int j = 0;
//        while (fast != nullptr&&j++<n+1) {
//            fast = fast->next;
//        }
//        while (fast != nullptr) {
//            fast = fast->next;
//            low = low->next;
//        }
//        if (low == temp) {
//            head = head->next;
//            return head;
//
//        }
//        fast = low->next;
//        low ->next= fast->next;
//        delete fast;
//        return head;
//      /*  执行用时：8 ms, 在所有 C++ 提交中击败了54.31 % 的用户
//            内存消耗：10.9 MB, 在所有 C++ 提交中击败了5.05 % 的用户*/
//    }
//};
//int main() {
//    Solution b;
//    ListNode* a = new ListNode(1);
//    b.removeNthFromEnd(a, 1);
//}