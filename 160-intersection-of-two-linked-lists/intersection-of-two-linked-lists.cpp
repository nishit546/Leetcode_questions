/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      ListNode* hA = headA;
      ListNode* hB = headB;
      while(hA != hB){
        hA = (hA == NULL) ? headB : hA->next;
        hB = (hB == NULL) ? headA : hB->next;
      }
      return hA;
    }
};