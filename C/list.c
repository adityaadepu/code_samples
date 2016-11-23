#include<stdio.h>
#include<stdlib.h>
typedef struct node_type{
int data;
struct node_type *next;
}node;
typedef node *list;

int main(){
list head,temp;
int ch;
int n;

head = NULL;

printf("Enter data ? (1/0) \n");
scanf("%d",&ch);

while(ch==1){
printf(" Give data: ");
scanf("%d",&n);
fflush(stdin);
temp = (node *) malloc(sizeof(node));
temp->data = n;
temp->next = head;
head = temp;
fflush(stdin);
printf("\n Enter more data (1/0):");
scanf("%d",&ch);

}

temp = head;
while(temp!=NULL)
{
printf("%d ", temp->data);
temp = temp->next;
}
}
