/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    // Node* helper(Node* head, unordered_map<Node*, Node*>&mp){
    //     if(head == 0) return 0;
    //     Node* newHead = new Node(head->val);
    //     mp[head] = newHead;
    //     newHead->next = helper(head->next,mp);
    //     if(head->random){
    //         newHead->random = mp[head->random];
    //     }
    //     return newHead;
    // }
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        Node* it = head;
        while(it){
            Node* clone = new Node(it->val);
            clone->next = it->next;
            it->next = clone;
            it = it->next->next;
        }
        it = head;
        while(it){
            Node* clone = it->next;
            clone->random = it->random?it->random->next:nullptr;
            it = it->next->next;
        }
        it = head;
        Node* cloneHead = it->next;
        while(it){
            Node* clone = it->next;
            it->next = it->next->next;
            if(clone->next){
                clone->next = clone->next->next;

            }
            it = it->next;
        }
        return cloneHead;



        // unordered_map<Node*, Node*>mp;
        // return helper(head, mp);
    }
};