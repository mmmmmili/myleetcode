//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//class Solution {
//public:
//    ListNode* insertionSortList(ListNode* head) {
//        if (head == NULL)return NULL;
//        ListNode* ptr = head->next,*end= head, * first = new ListNode(-1), * ptr2, * ptr3;
//        first->next = head;
//        while (ptr) {
//            ptr2 = first;
//            ptr3 = first->next;
//            while (ptr3 != end ) {
//                if (ptr3->val >= ptr->val) {
//
//                    end->next = ptr->next;
//
//                    ptr2->next = ptr;
//                    ptr->next = ptr3;
//               
//                    break;
//                }
//                ptr2 = ptr3;
//                ptr3 = ptr3->next;
//            }
//            if (ptr3 == end) {
//                if (ptr3->val >= ptr->val) {
//
//                    end->next = ptr->next;
//
//                    ptr2->next = ptr;
//                    ptr->next = ptr3;
//
//               
//                }
//                else {
//                    end = ptr;
//                    
//                }
//            }
//                
//            ptr = end->next;
//        }
//
//        return first->next;
//    }
//   /* 执行用时：48 ms, 在所有 C++ 提交中击败了48.17 % 的用户
//        内存消耗：9.9 MB, 在所有 C++ 提交中击败了12.04 % 的用户*/
//
//};
//
//int main() {
//    Solution b;
//    ListNode* a = new ListNode(4);
//    a->next= new ListNode(1);
//    a->next->next = new ListNode(3);
//    b.insertionSortList(a);
//}