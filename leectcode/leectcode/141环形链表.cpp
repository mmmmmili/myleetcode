//#include<iostream>
//#include<set>
//#include <unordered_set>
//using namespace std;
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//class Solution {
//public:
//    bool hasCycle1(ListNode* head) {
//        if (!head)return false;
//        int sum = 1024;
//        int sums[1024] = { 0,0 }, i = 0, j = 0;
//        while (head->next && i < 1024) {
//            sum ^= head->val;
//            head = head->next;
//            sums[i++] = sum;
//            for (j = 0; j < i-1; j++) {
//                if (sum == sums[j]) {
//                    return true;
//                }
//            }
//        }
//        return false;
//    }
//    bool hasCycle2(ListNode* head) {
//        if (!head)return false;
//        unordered_set< ListNode* > hash;
//        while (head->next) {
//            if (hash.count(head)) {
//                return true;
//          }
//            hash.insert(head);
//            head = head->next;
//        }
//        return false;
//    }
//    /*执行用时：20 ms, 在所有 C++ 提交中击败了15.81 % 的用户
//        内存消耗：9.7 MB, 在所有 C++ 提交中击败了12.36 % 的用户*/
//    bool hasCycle3(ListNode* head) {
//        if (!head)return false;
//        ListNode* fast = head->next, * low = head;
//        while (fast&&low) {
//            
//            if (low == fast)return true;
//
//            fast = fast->next;
//            if (fast)fast = fast->next;
//            else {
//                return false;
//            }
//            low = low->next;
//        }
//        return false;
//    }
//    //执行用时：12 ms, 在所有 C++ 提交中击败了65.51 % 的用户
//    //    内存消耗：7.3 MB, 在所有 C++ 提交中击败了89.39 % 的用户
//};
//int main() {
//    ListNode* a = new ListNode(3);
//   /* a->next = new ListNode(2);
//    a->next->next = new ListNode(0);*/
//   
//    ListNode* c= new ListNode(4);
//    a->next = c;
//    c->next = a;
//    /*a->next->next->next = c;
//    c->next = a;*/
//    Solution b;
//    cout << b.hasCycle3(a);
//}