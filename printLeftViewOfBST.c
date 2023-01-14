#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

int maxLevel = 0;
typedef struct node Node;
Node* insert(Node *root, int );
void printTree(Node *root);
void printLeftView(Node *root, int);

int main(){
    Node *root=NULL;
    int n;
    printf("Enter the no of node you want to store: ");
    scanf("%d",&n);
    printf("Enter %d node data:\n", n);
    while (n!=0)
    {
        int d;
        scanf("%d", &d);
        root=insert(root, d);
        n--;
    }
    printf("Tree in inorder is:\n");
    printTree(root);
    printf("\nLeft View of tree is:\n");
    printLeftView(root, 1);
    return 0;
}
Node* insert(Node *root, int d){
    
    if(root==NULL){
        root=(Node*)malloc(sizeof(Node));
        root->data=d;
        root->left=root->right=NULL;
        return root;
    }
    if(root->data > d)
        root->left=insert(root->left, d);
    else
        root->right = insert(root->right, d);
    return root;
}
void printTree(Node *root){
    if(root==NULL)
    {
        return;
    }
    printTree(root->left);
    printf("%d ",root->data);
    printTree(root->right);
}
void printLeftView(Node *root, int l){
    if(root == NULL){
        return;
    }
    if(maxLevel < l){
        printf("%d ",root->data);
        maxLevel = l;
    }
    printLeftView(root->left, l+1);
    printLeftView(root->right, l+1);
}