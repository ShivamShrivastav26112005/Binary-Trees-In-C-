// Ques-> Level order traversal (Left to Right) 1,2,3,4,5,6,7
// Ques-> Level order traversal (Right to Left) 1,3,2,7,6,5,4



// // Ques-> nth level printing in preorder form 
// // if n=3 then this code prints all the nodes of 3rd level in left to right and right to left 
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
//     }
//     LevelOrder1(root->left,current+1,level+1);
//     LevelOrder1(root->right,current+1,level+1);
// }



// // Level Order Traversal (Right To Left)
// void LevelOrder2(Node* root, int current, int level)
// {
//     if(root==NULL) return ;
//     if(current==level){
//         cout<<root->val<<" ";
//     }
//     LevelOrder2(root->right,current+1,level+1);
//     LevelOrder2(root->left,current+1,level+1);
// }

// int main()
// {
//     // Manual tree 
//     Node* a=new Node(10); 
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

//     // (Left To Right)
//     LevelOrder1(a,1,1); // 3rd level 

//     cout<<endl;
    
//     // (Right To Left)
//     LevelOrder2(a,1,1);
    
// }






// level order traversal (left to right)
// nth level printing (by using preorder, inorder, postorder) they give the same result 

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

int levels(Node* root)
{
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}


// PREORDER,INORDER,POSTORDER THEY ARE GIVE THE SAME RESULT AND PRINT LEFT TO RIGHT ONLY NODES
void nthlevel(Node* root, int curr, int lev)
{
    if(root==NULL) return; 

// Normal Traversal -:

    // PREORDER TRAVERSAL -> root, left, right
    // if(curr==lev)  // root
    // {
    //     cout<<root->val<<" ";
    //     return ;
    // }
    // nthlevel(root->left,curr+1,lev); // left
    // nthlevel(root->right,curr+1,lev); // right

            // Or 

    // INORDER TRAVERSAL
    // nthlevel(root->left,curr+1,lev); // left
    // if(curr==lev)  // root
    // {
    //     cout<<root->val<<" ";
    //     return ;
    // }
    // nthlevel(root->right,curr+1,lev); // right
            // Or

    // POSTORDER TRAVERSAL
    // nthlevel(root->left,curr+1,lev); // left
    // nthlevel(root->right,curr+1,lev); // right
    // if(curr==lev)  // root
    // {
    //     cout<<root->val<<" ";
    //     return ;
    // }


// OUTPUT -: PREORDER,INORDER,POSTORDER-> THEY ALL ARE GIVE THE SAME RESULT 
// 10 
// 20 30 
// 40 50 60 70 


// Reverse Traversal -:

    // REVERSE PREORDER TRAVERSAL-> root, right, left
    // if(curr==lev)  // root 
    // {
    //     cout<<root->val<<" ";
    //     return ;
    // }
    // nthlevel(root->right,curr+1,lev); // right
    // nthlevel(root->left,curr+1,lev); // left 

                    // Or

    // REVERSE INORDER TRAVERSAL
    // nthlevel(root->right,curr+1,lev); // right
    // if(curr==lev)  // root 
    // {
    //     cout<<root->val<<" ";
    //     return ;
    // }
    // nthlevel(root->left,curr+1,lev); // left 

                    // Or

    // REVERSE POSTORDER TRAVERSAL
    nthlevel(root->right,curr+1,lev); // right
    nthlevel(root->left,curr+1,lev); // left 
    if(curr==lev)  // root 
    {
        cout<<root->val<<" ";
        return ;
    }
    
// OUTPUT -:  REVERSE PREORDER,REVERSE INORDER,REVERSE POSTORDER-> THEY ALL ARE GIVE THE SAME RESULT IN REVERSE ORDER
// 10 
// 30 20 
// 70 60 50 40 

}


void levelOrder(Node* root)
{
    int level = levels(root); 
    for(int i=1; i<=level; i++)
    {
        nthlevel(root,1,i); 
        cout<<endl;
    }
}

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

    levelOrder(a);
    

}


