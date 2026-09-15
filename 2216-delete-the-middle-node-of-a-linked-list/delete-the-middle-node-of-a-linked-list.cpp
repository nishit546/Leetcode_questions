/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
       if(head->next == NULL){
        return NULL;
       } 
        // int n = 0;
        // ListNode* temp = head;
        // while(temp != NULL){
        //     temp = temp->next;
        //     n++;
        // }
        // int pos = floor(n/2);
        // temp = head;
        
        // for(int i = 0 ;i<pos-1;i++){
        //     temp = temp->next;
        // }
        // temp->next = temp->next->next;
        // return head;

        // SOLUTION 2
        ListNode* slow = head;
        ListNode* fast = head->next->next;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};