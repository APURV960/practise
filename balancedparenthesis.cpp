#include<iostream>
#include <stack>
using namespace std;

bool isvalid(string str){
    stack<char> st;
    for (char ch : str) {
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        } else {
            if (st.empty()) return false; 
            char charac = st.top();
            st.pop();
            if ((charac == '(' && ch != ')') ||(charac == '[' && ch != ']') ||(charac == '{' && ch != '}')) {
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string s="([{})]";
    if(isvalid(s))
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
}