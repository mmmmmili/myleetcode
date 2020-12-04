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
//    
//    bool hasCycle2(ListNode* head) {
//        if (!head)return NULL;
//        unordered_set< ListNode* > hash;
//        while (head->next) {
//            if (hash.count(head)) {
//                return head;
//          }
//            hash.insert(head);
//            head = head->next;
//        }
//        return NULL;
//    }
//    //执行用时：24 ms, 在所有 C++ 提交中击败了15.76 % 的用户
//    //    内存消耗：9.7 MB, 在所有 C++ 提交中击败了12.99 % 的用户
//    bool hasCycle3(ListNode* head) {
//        if (!head)return NULL;
//        ListNode* fast = head, * low = head;
//        while (fast&&low) {
//            fast = fast->next;
//            low = low->next;
//            if (fast)fast = fast->next;
//            else {
//                return NULL;
//            }
//            
//            if (low == fast) {
//                ListNode* ptrStart = head;
//                ListNode* ptrSecond = low;
//                while (ptrStart && ptrSecond) {
//                    if (ptrStart == ptrSecond) {
//                        return ptrStart;
//                    }
//                    ptrStart = ptrStart->next;
//                    ptrSecond = ptrSecond->next;
//                    
//                }
//            }
//
//            
//        }
//        return NULL;
//    }
//  /*  执行用时：16 ms, 在所有 C++ 提交中击败了27.32 % 的用户
//         内存消耗：7.5 MB, 在所有 C++ 提交中击败了52.09 % 的用户*/
//    bool hasCycle4(ListNode* head) {
//        if (!head)return NULL;
//        ListNode* fast = head, * low = head;
//        while (fast && low) {
//            fast = fast->next;
//            low = low->next;
//            if (fast)fast = fast->next;
//            else {
//                return NULL;
//            }
//
//            if (low == fast) {
//                low = head;
//                while (fast && low) {
//                    if (low == fast) {
//                        return low;
//                    }
//                    fast = fast->next;
//                    low = low->next;
//
//                }
//            }
//
//
//        }
//        return NULL;
//    }
//  /*  执行用时：8 ms, 在所有 C++ 提交中击败了95.98 % 的用户
//        内存消耗：7.6 MB, 在所有 C++ 提交中击败了21.85 % 的用户*/
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