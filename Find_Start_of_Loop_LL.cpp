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

    ListNode* hasCycle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
                slow = slow->next;
                if(fast == slow) return slow;
            }
        } 
        return nullptr;
    }
    ListNode* detectCycle(ListNode* head) {
        ListNode* fast = hasCycle(head);
        if(!fast) return nullptr;
        ListNode* slow = head;
        while(true){
            if(slow == fast) return slow;
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
        // unordered_map<ListNode*,bool> m;
        // ListNode* temp = head;
        // while(temp != NULL){
        //     if(m[temp] == true){
        //         return temp;
        //     }
        //     else{
        //         m[temp] = true;
        //     }
        //     temp = temp->next;
        // }
        // return nullptr;
    }
};