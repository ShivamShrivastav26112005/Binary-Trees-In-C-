#include <iostream>
#include<climits>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// display trees 
void display(Node* root)
{

    if(root==NULL) return ;
    cout<<root->val<<" ";
    display(root->left); // left recursion 
    display(root->right); // right recursion 

}

// sum of the tree nodes 
int sum(Node* root)
{

    // if(root==NULL) return 0;
    // int leftSum=sum(root->left); // left subtree 
    // int rightSum=sum(root->right); // right subtree
    // int ans=root->val+leftSum+rightSum;
    // return ans;

                // OR
    
    if(root==NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
     
}

int size(Node* root)
{
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}

// Maximum value/node in trees 
int maximum(Node* root)
{
    // if(root==NULL) return 0;
    // int leftmax=maximum(root->left);
    // int rightmax=maximum(root->right);
    // return max(root->val,max(leftmax,rightmax));

                 // Or

    if(root==NULL) return INT_MIN; // we use INT_MIN becoz when all the values/nodes of the tree is negative then it return 0 as a maximum value
    // but actually 0 is not a max value may be -1 or something else which is very inside the zero or any other +ve value
    return max(root->val,max(maximum(root->left),maximum(root->right)));
    
}


int levels(Node* root)
{
    // if(root==NULL) return 0;
    // int leftlevel=levels(root->left);
    // int rightlevel=levels(root->right);
    // int ans=1+max(leftlevel,rightlevel);
    // return ans;

               // OR

    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));

}

int main()
{
    // Manual tree - sasta tree
    // a is root node of the binary tree
    Node *a = new Node(1); 
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    // display tree 
    display(a); 
    cout<<endl;

    cout<<sum(a); // always we pass our root node here root node is (a)
    cout<<endl;

    cout<<size(a);
    cout<<endl;

    cout<<maximum(a);
    cout<<endl;

    cout<<levels(a);
    cout<<endl;

    int height=levels(a)-1;
    cout<<height;
}