// // we make our manual tree 
// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val)
//     {
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };


// // call 1, kaam, call 2,  they are give to me 6 different results.
// // call 1 -> left call 
// // call 2 -> right call


// // PreOrder display 
// void display(Node* root) // 10 20 40 50 30 60 70 
// {
//     if(root==NULL) return; // base case
//     cout<<root->val<<" ";  // kaam / work 
//     display(root->left);   // call 1 -> left call 
//     display(root->right);  // call 2 -> right call 
// }


// // // InOrder display 
// // void display(Node* root) // 40 20 50 10 60 30 70 
// // {
// //     if(root==NULL) return; // base case
// //     display(root->left);   // call 1
// //     cout<<root->val<<" ";  // kaam / work 
// //     display(root->right);  // call 2
// // }


// // // PostOrder display 
// // void display(Node* root) // 40 50 20 60 70 30 10 
// // {
// //     if(root==NULL) return; // base case
// //     display(root->left);   // call 1 
// //     display(root->right);  // call 2
// //     cout<<root->val<<" ";  // kaam / work
// // }



// // // PreOrder display reverse
// // void display(Node* root)  // 10 30 70 60 20 50 40  
// // {
// //     if(root==NULL) return; // base case
// //     cout<<root->val<<" ";  // kaam / work
// //     display(root->right);  // call 2
// //     display(root->left);   // call 1 
// // }
 

// // // PostOrder display reverse
// // void display(Node* root)  // 70 30 60 10 50 20 40 
// // {
// //     if(root==NULL) return; // base case
// //     display(root->right);  // call 2
// //     cout<<root->val<<" ";  // kaam / work
// //     display(root->left);   // call 1 
// // }


// // // PostOrder display reverse
// // void display(Node* root)  // 70 60 30 50 40 20 10 
// // {
// //     if(root==NULL) return; // base case
// //     display(root->right);  // call 2
// //     display(root->left);   // call 1 
// //     cout<<root->val<<" ";  // kaam / work
// // }


// int main()
// {
//     // Manual trees
//     Node* a=new Node(10); // this is a root node (a) 
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);
//     Node* e=new Node(50);
//     Node* f=new Node(60);
//     Node* g=new Node(70);

//     // connections
//     a->left=b;
//     a->right=c;
//     b->left=d;
//     b->right=e;
//     c->left=f;
//     c->right=g;

//     display(a); 

// }





// PreOrder Traversals -> root,left,right
// InOrder Traversals -> left,root,right
// PostOrder Traversals -> left,right,root

#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};


// PreOrder Traversal or display -> 
void PreOrder(Node* root) // 10 20 40 50 30 60 70 
{
    if(root==NULL) return; // base case
    cout<<root->val<<" ";  // root
    PreOrder(root->left);   // left
    PreOrder(root->right);  // right 
}


// InOrder Traversal or display -> 
void InOrder(Node* root) // 40 20 50 10 60 30 70 
{
    if(root==NULL) return; // base case
    InOrder(root->left);   // left
    cout<<root->val<<" ";  // root
    InOrder(root->right);  // right 
}


// PostOrder Traversal or display -> 
void PostOrder(Node* root) // 40 50 20 60 70 30 10 
{
    if(root==NULL) return; // base case
    PostOrder(root->left);   // left
    PostOrder(root->right);  // right 
    cout<<root->val<<" ";  // root
}

int main()
{
    // Manual trees
    Node* a=new Node(10); 
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);
    Node* g=new Node(70);

    // connections
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    PreOrder(a); 
    cout<<endl;
    InOrder(a);
    cout<<endl;
    PostOrder(a);

}

// 10 20 40 50 30 60 70 
// 40 20 50 10 60 30 70 
// 40 50 20 60 70 30 10 

























