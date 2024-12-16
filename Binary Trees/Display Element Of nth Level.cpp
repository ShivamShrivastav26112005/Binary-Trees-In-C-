// // Print elements of nth level.

// // n=3 ( Print elements of 3rd level.)
// #include<iostream>
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

// // By using preorder we print elements of nth level.
// void nthlevel(Node* root, int currentLev, int nthLev)
// {
//     if(root==NULL) return ;
//     if(currentLev==nthLev)
//     {
//         cout<<root->val<<" ";
//         return ;
//     }
//     nthlevel(root->left,currentLev+1,nthLev);
//     nthlevel(root->right,currentLev+1,nthLev);
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

// // in display fun we pass our root node , our current level and which level we want to print (nth) level
//     nthlevel(a,1,3);

// }











// Method-1 
// nth level printing (by using preorder)

// Ques-> Level Order Traversal (by using nth level (DFS)) preorder traversal
// Print/Display ele.s/nodes of the BT in Level wise (L1,L2,L3 ...)
// Print elements of nth level.

// n=3 ( Print elements of 3rd level.)
// #include<iostream>
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

// // By using preorder we print elements of nth level.
// void levelOrder(Node* root, int currentLev, int nthLev)
// {
//     if(root==NULL) return ;
//     if(currentLev==nthLev)
//     {
//         cout<<root->val<<" ";
//     }
//     levelOrder(root->left,currentLev+1,nthLev+1); // this is a recursion call 
//     levelOrder(root->right,currentLev+1,nthLev+1); // this is also a recursion call 
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

//     // level order traversal -> traverse in the tree by levels
//     levelOrder(a,1,1);

// }





// *********** this is right code for nth level *************

// nth level printing (by using preorder)
// // Method -2 

// #include<iostream>
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

// int levels(Node* root)
// {
//     if(root==NULL) return 0;
//     return 1+max(levels(root->left),levels(root->right));
// }

// void nthlevel(Node* root, int curr, int lev)
// {
//     if(root==NULL) return; // base case 

//     // if(curr==lev) cout<<root->val<<" ";   // hme jis level tk print karna hota h hm us level tk print karte h
//     // and uske bad bhi needless/extra call lagate h which takes more time and space (call stack)
//     // not required to call again if yuo have already reached the required level

//                             // OR

//     // more optimized as compare to upper condition becoz jis level tk hme print karna h
//     // hm us level tk jakar print kar dete h and then (return) kar dete h extra call nhi lagta uske bad
//     if(curr==lev) 
//     {
//         cout<<root->val<<" ";
//         return ;
//     }
//     nthlevel(root->left,curr+1,lev);
//     nthlevel(root->right,curr+1,lev);
// }

// void levelOrder(Node* root)
// {
//     int level = levels(root); // we find no. of levels of the tree and store into the level variable
//     for(int i=1; i<=level; i++)
//     {
//         nthlevel(root,1,i); // i is our level of tree
//         cout<<endl;
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

//     levelOrder(a);

// }








// // // nth level printing (by using preorder)
// // // Ques-> Level Order Traversal (Left To Right) & (Right To Left) (by using nth level (DFS)) preorder traversal

// #include<iostream>
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

// // Level Order Traversal (Left To Right)
// void LevelOrder1(Node* root, int current, int level)
// {
//     if(root==NULL) return ;
//     if(current==level){
//         cout<<root->val<<" ";
//         return ;
//     }
//     LevelOrder1(root->left,current+1,level);
//     LevelOrder1(root->right,current+1,level);
// }

// // Level Order Traversal (Right To Left)
// void LevelOrder2(Node* root, int current, int level)
// {
//     if(root==NULL) return ;
//     if(current==level){
//         cout<<root->val<<" ";
//         return ;
//     }
//     LevelOrder2(root->right,current+1,level);
//     LevelOrder2(root->left,current+1,level);
// }

// int main()
// {
//     // Manual tree 
//     Node* a=new Node(10); // a is root node and we always pass our root node only in the fun.
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);
//     Node* e=new Node(50);
//     Node* f=new Node(60);
//     Node* g=new Node(70);

//     // Trees Connections 
//     a->left=b;
//     a->right=c;
//     b->left=d;
//     b->right=e;
//     c->left=f;
//     c->right=g;

//     // Level Order Traversal (Left To Right)
//     // we pass three parameters 
//     LevelOrder1(a,1,3); // 1st parameter is current level of the tree and 2nd parameter is for how many levels we want to print 
//     // a is root node 

//     cout<<endl;

//     // Level Order Traversal (Right To Left)
//     LevelOrder2(a,1,3);
// }

// // 3rd level tk all nodes are displayed by using preorder traversal 
// // 40 50 60 70 
// // 70 60 50 40









// nth level printing (by using preorder)
// display level wise by using preorder (root, left, right)
// Ques-> Level Order Traversal (Left To Right) & (Right To Left) by using preorder traversal 


#include<iostream>
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

// Level Order Traversal (Left To Right)
void LevelOrder1(Node* root, int current, int level)
{
    if(root==NULL) return ;
    if(current==level){
        cout<<root->val<<" ";
    }
    LevelOrder1(root->left,current+1,level);
    LevelOrder1(root->right,current+1,level);
}

// Level Order Traversal (Right To Left)
void LevelOrder2(Node* root, int current, int level)
{
    if(root==NULL) return ;
    if(current==level){
        cout<<root->val<<" ";
    }
    LevelOrder2(root->right,current+1,level);
    LevelOrder2(root->left,current+1,level);
}

int main()
{
    // Manual tree 
    Node* a=new Node(10); 
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);
    Node* g=new Node(70);

    // Trees Connections 
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    // (Left To Right)
    LevelOrder1(a,1,3); 
    cout<<endl;
    // (Right To Left)
    LevelOrder2(a,1,3);
    
}
