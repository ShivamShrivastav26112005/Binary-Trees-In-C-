// // Level Order Traversal By Using Queue -: this technique is known as BFS
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
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


// // // Display Ele.s/Nodes in Normal Order of the tree
// // void display(Node* root)
// // {
// //     queue<Node*>q;
// //     q.push(root);
// //     while(q.size()>0)
// //     {
// //         Node* temp=q.front();
// //         q.pop();
// //         cout<<temp->val<<" ";
// //         if(temp->left!=NULL) q.push(temp->left);
// //         if(temp->right!=NULL) q.push(temp->right);
// //     }
// // }


// // Display Ele.s/Nodes in Reverse Order of the tree
// void display(Node* root) // BFS 
// {
//     queue<Node*>q;
//     q.push(root);
//     while(q.size()>0)
//     {
//         Node* temp=q.front();
//         q.pop();
//         cout<<temp->val<<" ";
//         if(temp->right!=NULL) q.push(temp->right);
//         if(temp->left!=NULL) q.push(temp->left);
//     }
// }


// int main()
// {
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);
//     Node* e=new Node(50);
//     Node* f=new Node(60);
//     Node* g=new Node(70);

//     a->left=b;
//     a->right=c;
//     b->left=d;
//     b->right=e;
//     c->left=f;
//     c->right=g;


//     display(a);
 

// }


// Steps -> 
// Node* temp=q.font(),q.pop(),print
// push queue => left and right of the temp node 


// Revise

// Level Order Traversal By Using Queue -: this technique is known as BFS
#include<iostream>
#include<queue>
using namespace std;
class Node{
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

// void display(Node* root)
// {
//     queue<Node*>q;
//     q.push(root);
//     while(q.size()>0)
//     {
//         Node* temp=q.front();
//         q.pop();
//         cout<<temp->val<<" ";
//         if(temp->left!=NULL) q.push(temp->left);
//         if(temp->right!=NULL) q.push(temp->right);
//     }
// }




void display(Node* root)
{
    queue<Node*>q;
    q.push(root); 
    while(q.size()>0) // while our q'size is not empty then you do their work 
    {
        Node* temp=q.front(); // here we use a temp node variable to store q'nodes/ele.s
        q.pop();
        cout<<temp->val<<" "; // temp me hmara nodes store h to hm ab temp ke value ko prin tkara skte h 
        if(temp->left!=NULL) q.push(temp->left); //  now hm q me root jo ki store h temp me eski left ko q me push kar denge 
        if(temp->right!=NULL) q.push(temp->right); // and eski temp ki right ko bhi q me push kar denge agar h to 
    }
}

// for reverse traversal you change the left into right nodes 

int main()
{
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);
    Node* g=new Node(70);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;


    display(a);
 

}
