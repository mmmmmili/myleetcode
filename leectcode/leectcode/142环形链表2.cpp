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
//    //ִ����ʱ��24 ms, ������ C++ �ύ�л�����15.76 % ���û�
//    //    �ڴ����ģ�9.7 MB, ������ C++ �ύ�л�����12.99 % ���û�
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
//  /*  ִ����ʱ��16 ms, ������ C++ �ύ�л�����27.32 % ���û�
//         �ڴ����ģ�7.5 MB, ������ C++ �ύ�л�����52.09 % ���û�*/
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
//  /*  ִ����ʱ��8 ms, ������ C++ �ύ�л�����95.98 % ���û�
//        �ڴ����ģ�7.6 MB, ������ C++ �ύ�л�����21.85 % ���û�*/
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