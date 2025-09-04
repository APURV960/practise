// queue using array
// #include<iostream>
// using namespace std;
// class queue{
//     private:
//     int * arr;
//     int capacity;
//     int front;
//     int rear;
//     public:
//     queue(int size){
//         capacity=size;
//         front=0;rear=-1;
//         arr=new int[capacity];
//     }
//     bool isempty(){
//         return front>rear;
//     }
//     bool isfull(){
//         return rear==capacity-1;    
//     }
//     void enqueue(int x){
//         if(isfull()){
//             cout<<"queue is full!!"<<endl;
//             return;
//         }
//         rear++;
//         arr[rear]=x;
//     }
//     void dequeue(){
//         if(isempty()){
//             cout<<"queue is empty!!"<<endl;
//             return;
//         }
//         front++;
//     }
//     int peek(){
//         if(isempty()){
//             cout<<"queeu is empty"<<endl;
//             return -1;
//         }
//         return arr[front];
//     }
//     void display(){
//         if(isempty()){
//             cout<<"queeu is empty"<<endl;
//             return;
//         }
//         for(int i=front;i<=rear;i++){
//             cout<<arr[i]<<", ";
//         }
//         cout<<"\n";
//     }
// };
// int main(){
//     queue q(5);
//     q.enqueue(4);
//     q.enqueue(3);
//     q.display();
//     q.dequeue();
//     q.peek();
//     q.display();
//     return 0;
// }
// ========================================================