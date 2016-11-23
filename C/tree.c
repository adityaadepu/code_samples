#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype{
int data;
struct nodetype *right, *left;
} nodes;

typedef nodes *tree;

void insert(int value, tree node){
if(node == NULL) {
node = (nodes *)malloc(sizeof(nodes));
node->data = value;
node->right = NULL;
node->left = NULL;
} else if(node->data < value){
if(node->left == NULL){
node->left = (nodes *) malloc(sizeof(nodes));
node->left->data = value;
} else {
insert(value,node->left);
}
} else {
if(node->right == NULL){
node->right = (nodes *) malloc(sizeof(nodes));
node->right->data = value;
} else {
insert(value, node->right);
}
}
}

void inorder(tree node){
if(node->left != NULL)
inorder(node->left);
printf("%d ",node->data);
if(node->right != NULL) 
inorder(node->right);
}
int main(){

int ch = 1, n;
tree root=NULL, node = NULL;
printf("\n Enter next number : " );
scanf("%d",&n);
//root = (nodes *) malloc (sizeof(nodes));
insert(n,root);
printf("\n More data 1/0? : ");
scanf("%d",&ch);

while(ch == 1){
printf("\n Enter next number : " );
scanf("%d",&n);
printf("%d",n);
insert(n,root);
printf("\n More data 1/0? : ");
scanf("%d",&ch);

}

inorder(root);
}
