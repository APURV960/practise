// stack using array
// #include<iostream>
// using namespace std;

// class Stack{
//     int n;
//     int *arr;
//     int top;
//     public:
//     Stack(){
//         top=-1;
//         n=1000;
//         arr=new int[n];
//     }
//     void push(int x){
//         top++;
//         arr[top]=x;
//     }
//     int pop(){
//         int x=arr[top];
//         top--;
//         return x;
//     }
//     int Top(){
//         return arr[top];
//     }
//     int size(){
//         return top+1;
//     }
// };
// int main(){
//     Stack st;
//     st.push(9);
//     st.push(7);
//     st.pop();
//     st.Top();
//     cout<<st.Top()<<endl;
//     st.size();
//     cout<<"size:"<<st.size()<<endl;
    
//     return 0;
// }

// ========================================================
// minstack
#include<iostream>
#include<stack>
using namespace std;

class minstack{
    stack<int> mainst;
    stack<int>minst;
    public :
    void push(int x){
        mainst.push(x);
        if(minst.empty()|| x<=minst.top()) minst.push(x);
        mainst.push(x);
    }
    void pop(){
        if(mainst.top()==minst.top()){
            minst.pop();
        }
        mainst.pop();
    }
    int top(){
        return mainst.top();
    }
    int getmin(){
        return minst.top();
    }
};
int main(){
    minstack s;
    s.push(9);
    s.push(3);
    s.push(10);
    cout<<s.getmin()<<endl;
    cout<<"top elem:"<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.getmin()<<endl;
    return 0;
}