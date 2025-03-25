#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    /*Node(int data1,Node* next1){
        data = data1;
        next=next1;
    }*/
   Node(int data1){
    data=data1;
    next=nullptr;
   }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i =1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover = temp;
    } 
    return head;
}

int main(){
    vector<int> arr = {22,55,1,2};
    //Node* a = new Node{arr[0],nullptr};
    //cout<<a->data;
    Node* head= convertArr2LL(arr);
    print(head);
}