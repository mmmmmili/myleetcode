//
//
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
// 
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        ListNode* first = new ListNode(0), * ptr = first, * ptr2;
//        while (l1 && l2) {
//            if (l1->val <= l2->val) {
//                ptr->next = new ListNode(l1->val);
//                ptr = ptr->next;
//                l1 = l1->next;
//            }
//            else {
//                ptr->next = new ListNode(l2->val);
//                ptr = ptr->next;
//                l2 = l2->next;
//            }
//
//        }
//        ptr2 = l1 ? l1 : l2;
//        while (ptr2) {
//            ptr->next = new ListNode(ptr2->val);
//            ptr = ptr->next;
//            ptr2 = ptr2->next;
//        }
//        return first->next;
//
//
//    }/*执行用时：16 ms, 在所有 C++ 提交中击败了30.79 % 的用户
//        内存消耗：15.2 MB, 在所有 C++ 提交中击败了5.37 % 的用户*/
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        ListNode* first = new ListNode(0), * ptr = first;
//        while (l1 && l2) {
//            if (l1->val <= l2->val) {
//                ptr->next = l1;
//                ptr = ptr->next;
//                l1 = l1->next;
//            }
//            else {
//                ptr->next = l2;
//                ptr = ptr->next;
//                l2 = l2->next;
//            }
//
//        }
//        ptr->next = l1 ? l1 : l2;
//        return first->next;
//
//
//    }/*执行用时：8 ms, 在所有 C++ 提交中击败了89.97 % 的用户
//        内存消耗：15 MB, 在所有 C++ 提交中击败了5.37 % 的用户*/
//};