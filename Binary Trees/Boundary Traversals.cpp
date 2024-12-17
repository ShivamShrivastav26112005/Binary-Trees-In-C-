// Boundary Traversals and display boundary of the given tree

#include<iostream>
#include<climits>
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

Node* construct(int arr[], int n){ // using queue
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);

    int i=1;
    int j=2;

    while(q.size()>0 && i<n){
        Node* temp=q.front(); // root node is store in the temp variable 
        q.pop();
        Node* l;
        Node* r;

        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
        else r=NULL;

        temp->left=l;
        temp->right=r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}
int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

void nthlevel(Node* root, int curr, int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return ;
    }
    nthlevel(root->left,curr+1, level);
    nthlevel(root->right,curr+1,level);
}

void display(Node* root) // level order traversal 
{
    int level=levels(root);
    for(int i=1; i<=level; i++){
        nthlevel(root,1,i);
        cout<<endl;
    }
}

// leftboundary-> top to bottom display
void leftboundary(Node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return ; // leaf nodes not included condition for leaf node
    Node* temp=root;
    cout<<temp->val<<" ";
    if(root->left!=NULL) leftboundary(root->left);
    if(root->left==NULL) leftboundary(root->right);
}

// leafboundary -> left to right display 
void leafboundary(Node* root){
    if(root==NULL) return;
    Node* temp=root;
    // condition for leaf node -:
    if(root->left==NULL && root->right==NULL) cout<<temp->val<<" ";
    leafboundary(root->left);
    leafboundary(root->right);
}


// // display rightboundary in normal order excluding leaf nodes (top to bottom)
// void rightboundary(Node* root){
//     if(root==NULL) return ;
//     Node* temp=root;
//     cout<<temp->val<<" ";
//     if(root->left==NULL) rightboundary(root->right);
//     if(root->left!=NULL) rightboundary(root->right);

// }



// // display rightboundary in reverse order excluding leaf nodes (bottom to top)
void rightboundary(Node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return ;
    Node* temp=root;
    rightboundary(root->right);
    if(root->right==NULL) rightboundary(root->left);
    cout<<temp->val<<" ";
}

// boundary(circle) == top to bottom(left boundary) , left to right(leaf boundary) , bottom to top(right boundary) 
void boundary_traversal(Node* root) 
{
    leftboundary(root);
    leafboundary(root);
    rightboundary(root->right);
}

int main()
{
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);


    // Display Constructed tree -: 
    // level order traversal to check our tree is correctly constructed or not 
    // // display(root); // display our tree using level order traversal 


    // Boundary Traversals -: 
    // Steps-: 
    // 1) - left boundary (excluding leaf nodes)
    // 2) - bottom/leaf boundary/nodes 
    // 3) - right boundary (excluding leaf nodes) means not include leaf nodes 
    // leaf nodes -> jiske left and right nodes are NULL.


    // 1) Display -> left boundary (excluding leaf nodes)
    // // leftboundary(root); // we display our left boundary by using preorder traversals


    // 2) Display -> leaf boundary (only include leaf nodes)
    // // leafboundary(root);


    // 3) Display -> right boundary (excluding leaf nodes)
    // rightboundary(root->right);


    // combine all three functions in one function and this fun is display our boundary of the given tree
    boundary_traversal(root);

}
// 1 2 4 7 11 15 19 24 16 25 26 27 13 28 23 18 14 10 6 3 
// done shivam 02:00 AM date-> 08-03-2024 
