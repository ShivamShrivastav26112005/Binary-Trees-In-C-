

// #include<iostream>
// #include<climits>
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

// // construct fun returns the node which is our root node 
// Node* construct(int arr[], int n)
// {
//     queue<Node*> q;   
//     Node* root=new Node(arr[0]);
//     q.push(root);
//     int i=1;
//     int j=2;
//     while(q.size()>0 && i<n) // n is the size of the array 
//     {
//         Node* temp=q.front();
//         q.pop();

//         Node* l;
//         Node* r;

//         // INT_MIN means NULL and we can't push NULL into the queue
//         if(arr[i]!=INT_MIN) l=new Node(arr[i]);
//         else l=NULL;
//         if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
//         else r=NULL;

//         temp->left=l;
//         temp->right=r;

//         if(l!=NULL) q.push(l);
//         if(r!=NULL) q.push(r);

//         i+=2;
//         j+=2;

//     }
//     return root;

// }

// void display(Node* root)
// {
//     if(root==NULL) return;
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
// int main()
// {
//     int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9}; // INT_MIN is used for NULL values
//     int n=sizeof(arr)/sizeof(arr[0]);
//     // construct tree from array to tree
//     Node* root=construct(arr,n);

//     // display our constructed tree 
//     display(root); // Display using level order traversal (by using queue)

// }







// // Rivision of the constructed tree how it convert from array to a tree 
// // how we manually construct the binary tree

// #include<iostream>
// #include<queue>
// #include<climits>
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

// void display(Node* root)
// {
//     if(root==NULL) return ;
//     queue<Node*> q;
//     q.push(root);
//     while(q.size()>0)
//     {
//         Node* temp=q.front(); // q.front(); it is a node and if we want to print these values then we use temp->val
//         q.pop();
//         cout<<temp->val<<" ";
//         if(temp->left!=NULL) q.push(temp->left);
//         if(temp->right!=NULL) q.push(temp->right);
//     }
// }

// Node* construct(int arr[], int n)
// {
//     queue<Node*> q;
//     Node* root=new Node(arr[0]);
//     q.push(root);

//     int i=1;
//     int j=2;

//     while(q.size()>0 && i<n)
//     {
//         Node* temp=q.front();
//         q.pop();

//         Node* l;
//         Node* r;

//         if(arr[i]!=INT_MIN) l=new Node(arr[i]);
//         else l=NULL;
//         if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
//         else r=NULL;

//         temp->left=l;
//         temp->right=r;

//         if(l!=NULL) q.push(l);
//         if(r!=NULL) q.push(r);

//         i+=2;
//         j+=2;
//     }
//     return root;
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,INT_MIN};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     Node* root=construct(arr,n);

//     display(root);
// }

// // 1 2 3 4 5 6 7 8 






// Here is a simple and easy-to-understand C++ implementation of the Linked List Representation of Trees. Each node will have a pointer to its first child and its next sibling, making it efficient to represent trees with an arbitrary number of children.
// Code: Linked List Representation of a Tree




#include <iostream>
#include <queue>
using namespace std;

// Node structure
class Node {
public:
    int val;              // Value of the node
    Node* firstChild;     // Pointer to the first child
    Node* nextSibling;    // Pointer to the next sibling

    // Constructor
    Node(int value) {
        val = value;
        firstChild = nullptr;
        nextSibling = nullptr;
    }
};

// Function to add a child to a parent node
void addChild(Node* parent, int childValue) {
    Node* child = new Node(childValue);

    // If the parent has no children, set this as the first child
    if (parent->firstChild == nullptr) {
        parent->firstChild = child;
    } else {
        // Find the last sibling and attach the new child
        Node* temp = parent->firstChild;
        while (temp->nextSibling != nullptr) {
            temp = temp->nextSibling;
        }
        temp->nextSibling = child;
    }
}

// Function to display the tree level by level
void displayTree(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        // Print the current node
        cout << temp->val << " ";

        // Add all children of the current node to the queue
        Node* child = temp->firstChild;
        while (child != nullptr) {
            q.push(child);
            child = child->nextSibling;
        }
    }
}

// Main function
int main() {
    // Create the root node
    Node* root = new Node(1);

    // Add children to root
    addChild(root, 2);
    addChild(root, 3);
    addChild(root, 4);

    // Add children to node 2
    addChild(root->firstChild, 5);
    addChild(root->firstChild, 6);

    // Add children to node 3
    addChild(root->firstChild->nextSibling, 7);
    addChild(root->firstChild->nextSibling, 8);

    // Display the tree
    cout << "Tree in Level Order: ";
    displayTree(root);

    return 0;
}
