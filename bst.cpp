#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int data1) : data(data1), left(nullptr), right(nullptr) {}
    node(int data1, node *left1) : data(data1), left(left1), right(nullptr) {}
};
class sol
{
public:
    int ceilbst(node *root, int target)
    {
        int ceil = -1;
        // if(root==nullptr || root->right ==nullptr) return root;
        while (root)
        {
            if (root->data == target)
            {
                ceil = root->data;
                return ceil;
            }
            if (root->data < target)
            {
                root = root->right;
            }
            else
            {
                ceil = root->data;
                root = root->left;
            }
        }
        return ceil;
    }
};
void print(node *root)
{
    if (root == nullptr)
        return;

    print(root->left);
    cout << root->data << " ";
    print(root->right);
}
int main()
{
    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(13);
    root->left->left = new node(3);
    root->left->left->left = new node(2);
    root->left->left->right = new node(4);
    root->left->right = new node(6);
    root->left->right->right = new node(9);
    root->right->left = new node(11);
    root->right->right = new node(14);

    cout<<"binary search tree: ";
    print(root);
    cout << endl;

    sol s;
    int target=8;
    int ceil=s.ceilbst(root,target);

    if(ceil!=-1){
        cout << "Ceiling of " << target << " is: " << ceil << endl;
    }
    else{
        cout << "No ceiling found!";
    }
    return 0;
}