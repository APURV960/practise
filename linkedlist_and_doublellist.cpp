// 1. LINKEDLIST

// // reverse linkedlist
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;

//     node(int data1,node* next1){
//         data=data1;
//         next=next1;
//     }
//     node(int data1){
//         data=data1;
//         next=nullptr;
//     }
// };
// node* reversell(node* head){
//     if(head==nullptr||head->next==nullptr){
//         return head;
//     }
//     node* newhead=reversell(head->next);
//     node* front=head->next;
//     front->next=head;
//     head->next=nullptr;
//     return newhead;
// }
// void print(node* head){
//     node* temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     node* head=new node(1);
//     head->next=new node(2);
//     head->next->next=new node(3);
//     head->next->next->next=new node(4);
//     cout<<"origianl ll:";print(head);
//     head=reversell(head);
//     cout<<"reverse ll:";print(head);
//     return 0;
// }

// ==========================================================

//insert head in linked list and delete the last node
// #include<iostream>
// #include<vector>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

//     node(int data1, node* next1){
//         data=data1;
//         next=next1;
//     }
//     node(int data1){
//         data=data1;
//         next=nullptr;
//     }
// };
// void print(node* head){
//     while (head!=nullptr){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }
// node * inserthead(int data, node* head){
//     node* temp=new node(data,head);
//     return temp;
// }

// node* deletetail(node* head){
//     if(head==nullptr || head->next==nullptr) return nullptr;
//     node* temp=head;
//     while(temp->next->next !=nullptr){
//         temp=temp->next;
//     }
//     delete temp->next;
//     temp->next=nullptr;
//     return head;
// }
// int main(){
//     vector<int> arr={1,3,4,5};
//     int val=20;
//     node* head = new node(arr[0]);
//     head->next = new node(arr[1]);
//     head->next->next = new node(arr[2]);
//     head->next->next->next = new node(arr[3]);

//     head=inserthead(val,head);

//     print(head);
//     cout<<endl;
//     head=deletetail(head);
//     print(head);
//     return 0;
// }
// =========================================================================


// *******************************************************************************************
// // insert at tail in double linkedilist
// #include<iostream>
// #include <vector>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
//     node* prev;
//     node(int data1,node*next1,node*prev1){
//         data=data1;
//         next=next1;
//         prev=prev1; 
//     }
//     node(int data1){
//         data=data1;
//         next=nullptr;
//         prev=nullptr;
//     }
// };
//     node* convert2dll(vector<int> arr){
//         if (arr.empty()) return nullptr;

//         node* head= new node(arr[0]);
//         node* prev=head;
//         for(int i=1;i<arr.size();i++){
//             node* temp=new node(arr[i],nullptr,prev);
//             prev->next=temp;
//             prev=temp;
//         }
//         return head;
//     }
//     void print(node* head){
//         while(head!=nullptr){
//             cout<<head->data<<" ";
//             head=head->next;
//         }
//     }
//     node* inserttail(node* head,int k){
//         node* newnode=new node(k);
//         if(head==nullptr){
//             return newnode;
//         }
//         node* tail=head;
//         while(tail->next!=nullptr){
//             tail=tail->next;
//         }
//         tail->next=newnode;
//         newnode->prev=tail;
//         return head;
//     }
// int main(){
//     vector<int>arr={1,2,3,4,5,6};
//     node* head=convert2dll(arr);
//     print(head);
//     cout<<endl;
//     head=inserttail(head,8);
//     print(head);
//     return 0;
// }
// ===========================================================

// delete tail node in double linkedlist
// #include<iostream>
// #include<vector>
// using namespace std;

// class node{
//     public:
//         int data;
//         node *next;
//         node *back;

//     node(int data1, node *next1, node *back1){
//         data = data1;
//         next = next1;
//         back = back1;
//     }
//     node(int data1){
//         data = data1;
//         next = nullptr;
//         back = nullptr;
//     }
// };

// node* convert2dll(vector<int> arr){
//     if(arr.empty()) return nullptr;
    
//     node* head = new node(arr[0]);
//     node* prev = head;

//     for(int i = 1; i < arr.size(); i++){
//         node* temp = new node(arr[i], nullptr, prev);
//         prev->next = temp;
//         prev = temp;
//     }
//     return head;
// }

// void print(node* head){
//     while(head != nullptr){
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// node* deletehead(node* head){
//     if(head == nullptr || head->next == nullptr) {
//         delete head;
//         return nullptr;
//     }
    
//     node* prev = head;
//     head = head->next;
//     head->back = nullptr;
    
//     delete prev;
//     return head;
// }

// node* deletetail(node* head){
//     if(head == nullptr || head->next == nullptr) {
//         delete head;
//         return nullptr;
//     }

//     node* tail = head;
//     while(tail->next != nullptr){ // Fix: Ensure reaching the last node
//         tail = tail->next;
//     }

//     node* newTail = tail->back;
//     newTail->next = nullptr;
//     tail->back = nullptr;
    
//     delete tail; // Free memory

//     return head;
// }

// int main(){
//     vector<int> arr = {1, 2, 3, 4, 56, 7};
//     node* head = convert2dll(arr);

//     cout << "Before operation:" << endl;
//     print(head);

//     cout << "After operation:" << endl;
//     head = deletetail(head); 
//     print(head);

//     return 0;
// }
// ====================================================================
// reverse double linkedlist
// #include <iostream>
// #include <vector>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node* back;

//     node(int data1, node* next1, node* back1) {
//         data = data1;
//         next = next1;
//         back = back1;
//     }

//     node(int data1) {
//         data = data1;
//         next = nullptr;
//         back = nullptr;
//     }
// };

// // Function to convert an array into a doubly linked list
// node* convert2dll(vector<int> arr) {
//     if (arr.empty()) return nullptr;

//     node* head = new node(arr[0]);
//     node* prev = head;
    
//     for (int i = 1; i < arr.size(); i++) {
//         node* temp = new node(arr[i], nullptr, prev);
//         prev->next = temp;
//         prev = temp;
//     }
//     return head;
// }

// node* reversedll(node* head) {
//     if (head == nullptr || head->next == nullptr) {
//         return head;
//     }

//     node* curr = head;
//     node* prev = nullptr;

//     while (curr != nullptr) {
//         prev = curr->back;
//         curr->back = curr->next;
//         curr->next = prev;
//         curr = curr->back;
//     }
    
//     return prev->back;
// }

// void print(node* head) {
//     while (head != nullptr) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main() {
//     vector<int> arr = {12, 5, 8, 7, 4};
//     node* head = convert2dll(arr);
    
//     cout << "Doubly Linked List Initially: " << endl;
//     print(head);
    
//     cout << "Doubly Linked List After Reversing: " << endl;
//     head = reversedll(head);
//     print(head);
    
//     return 0;
// }

// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\



