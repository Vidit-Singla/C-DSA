#include<iostream>
using namespace std;

void solve(Node* head, int &carry){
    if(!head){
        return;
    }
    solve(head->next, carry);

    int sum = head->data + carry;
    int digit = sum%10;
    carry = sum/10;
    head->data=digit;
}

void add1(Node* head, int &carry){
    solve(head, carry);
    if(carry){
        Node* newHead = new Node(carry);
        newHead->next = head;
        head = newHead;
    }
    return head;
}

int main(){
    Node* head= new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);
    int carry = 1;
    add1(head, carry);
    return 0;
}