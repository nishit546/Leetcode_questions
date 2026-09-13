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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL){
            return NULL;
        }
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        int position = count-n+1;
        if(position == 1){
            return head->next;
        }
        temp = head;
        for(int i = 1;i<position-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
        
    }
};