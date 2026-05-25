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

    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;    
    }
    void insertAtTail(ListNode* &head,ListNode* &tail,int val){
        ListNode* newNode = new ListNode(val);
        if(head == NULL && tail == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL;
        ListNode* tail = NULL;
        ListNode* a = list1;
        ListNode* b = list2;
        while(a && b){
            int vala = a->val;
            int valb = b->val;
            if(vala<=valb){
                insertAtTail(head, tail, vala);
                a = a->next;
            }
            else{
                insertAtTail(head, tail, valb);
                b = b->next;
            }
        }
        while(a){
            insertAtTail(head,tail,a->val);
            a = a->next;
        }
        while(b){
            insertAtTail(head,tail,b->val);
            b = b->next;
        }
        return head;
    }
    ListNode* sortList(ListNode* head) {
        if(head==0 || head->next==0) return head;
        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = 0;
        left = sortList(left);
        right = sortList(right);
        ListNode* mergeLL = merge(left,right);
        return mergeLL;
    }
};