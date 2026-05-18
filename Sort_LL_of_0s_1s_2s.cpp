/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
  
    void insertAtTail(Node* &toMove, Node* &head, Node* &tail){
        if(head==NULL && tail==NULL){head = toMove; tail = toMove;}
        else{
            tail->next = toMove;
            tail = toMove;
        }
        
        
    }
  
    Node* segregate(Node* head) {
        Node* zeroHead = NULL;
        Node* zeroTail = NULL;
        Node* oneHead = NULL;
        Node* oneTail = NULL;
        Node* twoHead = NULL;
        Node* twoTail = NULL;
        
        Node* temp = head;
        // Node* forward = temp->next;
        while(temp != NULL){
            
            Node* toMove = temp;
            temp = temp->next;
            toMove->next = NULL;
            
            if(toMove->data==0){
                insertAtTail(toMove, zeroHead, zeroTail);
            }
            else if(toMove->data==1){
                insertAtTail(toMove, oneHead, oneTail);
            }
            else if(toMove->data==2){
                insertAtTail(toMove, twoHead, twoTail);
            }
        }
        
        if(zeroHead != NULL){
            if(oneHead != NULL){
                zeroTail->next = oneHead;
                oneTail->next = twoHead;
            }
            else{
                zeroTail->next = twoHead;
            }
            return zeroHead;
        }
        else{
            if(oneHead!=NULL){
                oneTail->next = twoHead;
                return oneHead;
            }
            else{
                return twoHead;
            }
        }
    }
};