// inorder traversal tree

// #include<iostream>
// #include<vector>
// using namespace std;

// struct node
// {
//     node* left;
//     node* right;
//     int data;

//     node(int val) : data(val), left(nullptr),right(nullptr) {}
// };
// void inorder(node * root, vector<int> &arr){
//     if(root==nullptr) return;
//     inorder(root->left,arr);
//     arr.push_back(root->data);
//     inorder(root->right,arr);
// }
// vector<int> inOrder(node * root){
//     vector<int> arr;
//     inorder(root,arr);
//     return arr;
// }
// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     vector<int> result=inOrder(root);
//     cout<<"inorder traversal"<<endl;

//     for(int val: result){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// ===================================================================================

//                              level order traversal

// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;

// struct node{
//     node* left;
//     node* right;
//     int data;

//     node(): data(0) , left(nullptr), right(nullptr){}
//     node(int x): data(x), left(nullptr),right(nullptr){}
//     node(int x,node* left,node* right): data(x), left(left),right(right){}
// };
// void levelorder(node* root){
//     if(!root) return ;
//     queue<node*> q;
//     q.push(root);

//     while(!q.empty()){
//         node* curr=q.front();
//         q.pop();

//         cout<< curr->data<<" ";
//         if(curr->left){
//             q.push(curr->left);
//         }
//         if(curr->right){
//             q.push(curr->right);
//         }
//     }
// }
// int main(){
//     node* root=new node(0);
//     root->left=new node(1);
//     root->right=new node(2);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     levelorder(root);

//     return 0;
// }
// =======================================================================================

// preorder iterative

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// struct node
// {
//     int data;
//     node *left;
//     node *right;

//     node() : data(0), left(nullptr), right(nullptr) {}
//     node(int data1) : data(data1), left(nullptr), right(nullptr) {}
//     node(int data1, node *left1, node *right1) : data(data1), left(left1), right(right1) {}
// };
// class solution
// {
// public:
//     vector<int> preorder_itera(node *root)
//     {
//         vector<int> preorder;
//         stack<node *> st;
//         if (root == nullptr)
//             return preorder;
//         st.push(root);
//         while (!st.empty())
//         {
//             root = st.top();

//             st.pop();

//             preorder.push_back(root->data);

//             if (root->right != nullptr)
//             {
//                 st.push(root->right);
//             }
//             if (root->left != nullptr)
//             {
//                 st.push(root->left);
//             }
//         }
//         return preorder;
//     }
// };

// int main()
// {
//     // Creating a binary tree
//     node *root = new node(1);
//     root->left = new node(2);
//     root->right = new node(3);
//     root->left->left = new node(4);
//     root->left->right = new node(5);

//     // Initializing the Solution class
//     solution sol;

//     // Getting the preorder traversal
//     vector<int> result = sol.preorder_itera(root);

//     // Displaying the preorder traversal result
//     cout << "Preorder Traversal: ";
//     for (int val : result)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }
// =======================================================================================

// post orde traversal using 2 stacks

// #include<iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// struct node
// {
//     int data;
//     node* left;
//     node* right;

//     node(int data1) : data(data1), left(nullptr), right(nullptr) {}
//     node(int data1, node* left1, node* right1) : data(data1), left(left1), right(right1) {}

// };
// vector<int> postorder2stk(node* root){
//     stack<node*> st1,st2;
//     vector<int> postorder;
//     st1.push(root);
//     while(!st1.empty()){
//         root=st1.top();
//         st1.pop();
//         st2.push(root);
//         if(root->left!= nullptr){
//             st1.push(root->left);
//         }
//         if(root->right != nullptr){
//             st1.push(root->right);
//         }
//     }
//     while(!st2.empty()){
//         postorder.push_back(st2.top()->data);
//         st2.pop();
//     }
//     return postorder;
// }
// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);    
//     root->left->left=new node(4);    
//     root->left->right=new node(5);    

//     vector<int> ans=postorder2stk(root);

//     for(int num:ans){
//         cout<<num<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// ======================================================================================

// preorder, inorder and postorder in same code
// #include<iostream>
// #include<vector>
// #include <stack>

// using namespace std;

// struct node{
//     int data;
//     node* left;
//     node* right;

//     node(int data1): data(data1),left(nullptr),right(nullptr){}
//     node(int data1,node* left1,node* right1): data(data1),left(left1),right(right1){}
// };
// vector<vector<int>> alltraversal(node* root){
//     vector<int> preorder,inorder,postorder;
//     stack<pair<node*,int>> st;
//     if(root) st.push({root,1});
//     while (!st.empty()){
//         auto& [curr,state] =st.top();

//         if(state==1){
//             preorder.push_back(curr->data);
//             state++;
//             if(curr->left) st.push({curr->left,1});
//         }
//         else if(state==2){
//             inorder.push_back(curr->data);
//             state++;
//             if(curr->right) st.push({curr->right,1});
//         }
//         else{
//             postorder.push_back(curr->data);
//             st.pop();
//         }
//     }
//     return {preorder,inorder,postorder}; 
// }
// int main() {
//     node* root = new node(1);
//     root->left = new node(2);
//     root->right = new node(3);
//     root->left->left = new node(4);
//     root->left->right = new node(5);

//     vector<vector<int>> traversals = alltraversal(root);

//     cout << "Preorder: ";
//     for (int x : traversals[0]) cout << x << " ";
//     cout << "\nInorder: ";
//     for (int x : traversals[1]) cout << x << " ";
//     cout << "\nPostorder: ";
//     for (int x : traversals[2]) cout << x << " ";
//     cout << endl;

//     return 0;
// }
// ===========================================================================================

//bianry tree is balanced

// #include<iostream>
// using namespace std;

// struct node{
//     int data;
//     node* left;
//     node* right;

//     node(int val): data(val),left(nullptr),right(nullptr){}
//     node(int val,node*  left1) : data(val), left(left1), right(nullptr){}
// };
// class balance{
//     public:
//     int dfsheight(node* root){
//         if(root==nullptr) return 0;
//         int lh=dfsheight(root->left);
//         int rh=dfsheight(root->right);
//         if((lh==-1) || (rh==-1)) return -1;

//         if(abs(lh-rh)>1) return -1;

//         return max(lh,rh)+1;
//     }
//     bool isbalanced(node* root){
//         return dfsheight(root)!=-1;
//     }
// };
// int main() {
//     // Creating a sample binary tree
//     node* root = new node(1);
//     root->left = new node(2);
//     root->right = new node(3);
//     root->left->left = new node(4);
//     root->left->right = new node(5);
//     root->left->right->right = new node(6);
//     root->left->right->right->right = new node(7);

//     // Creating an instance of the Solution class
//     balance solution;

//     // Checking if the tree is balanced
//     if (solution.isbalanced(root)) {
//         cout << "The tree is balanced." << endl;
//     } else {
//         cout << "The tree is not balanced." << endl;
//     }

//     return 0;
// }
// ===========================================================================

//boundary order traversal

// #include<iostream>
// #include <vector>

// using namespace std;
// struct node
// {
//     int data;
//     node* left;
//     node* right;

//     node(int data1): data(data1),left(nullptr),right(nullptr){}
//     node(int data1,node* left1): data(data1),left(left1),right(nullptr){}
// };
// class boundary{
//     public:
//     bool leaf(node* root){
//         return !root->left && !root->right;
//     }
//     void leftboundary(node* root,vector<int>& res){
//         node* curr=root->left;
//         while(curr){
//             if(!leaf(curr)){
//                 res.push_back(curr->data);
//             }
//             if(curr->left){
//                 curr=curr->left;
//             }
//             else{
//                 curr=curr->right;
//             }
//         }
//     }
//     void rightboundary(node * root, vector<int>& res){
//         node* curr=root->right;
//         vector<int>temp;
//         while(curr){
//             if(!leaf(curr)){
//                 temp.push_back(curr->data);
//             }
//             if(curr->right){
//                 curr=curr->right;
//             }
//             else{
//                 curr=curr->left;
//             }
//         }
//         for(int i=temp.size()-1;i>=0;i--){
//             res.push_back(temp[i]);
//         }
//     }
//     void addleaf(node* root,vector<int>& res){
//         if(leaf(root)){
//             res.push_back(root->data);
//             return;
//         }
//         if(root->left) addleaf(root->left,res);
//         if(root->right) addleaf(root->right,res);
//     }
//     vector<int> print(node* root){
//         vector<int>res;
//         if(!root) return res;
//         if(!leaf(root)){
//             res.push_back(root->data);
//         }
//         leftboundary(root,res);
//         addleaf(root,res);
//         rightboundary(root,res);

//         return res;
//     }
// };
// int main() {
//     node* root = new node(1);
//     root->left = new node(2);
//     root->right = new node(3);
//     root->left->left = new node(4);
//     root->left->right = new node(5);
//     root->right->left = new node(6);
//     root->right->right = new node(7);

//     boundary solution;

//     vector<int> result = solution.print(root);

//     cout << "Boundary Traversal: ";
//     for(int num:result){
//         cout<<num<<" ";
//     }
//     cout<<endl;

//     return 0;
// }

// ===================================================================

//vertical order traversal from left to right

// #include<iostream>
// #include<vector>
// #include <map>
// using namespace std;

// struct node
// {
//     int data;
//     node* left;
//     node* right;

//     node(int data1): data(data1),left(nullptr),right(nullptr){}
//     node(int data1,node* left1): data(data1),left(left1),right(nullptr){}
// };
// class sol{
//     public:
//         vector<vector<int>> vertical(node* root){
//             map<int,vector<int>>mapp;
            
//         }
// };


