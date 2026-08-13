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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* curr = head;
        while(curr != nullptr){
            ListNode* temp = curr->next;
            int greater = 0;
            while(temp != nullptr){
                if(temp->val > curr->val){
                    greater = temp->val;
                    break;
                }
                
                temp = temp->next;
            }
            ans.push_back(greater);
            curr = curr->next;
        }
        return ans;
    }
};
