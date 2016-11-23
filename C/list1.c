#include<stdio.h>
#include<stdlib.h>
typedef struct node_type{
int data;
struct node_type *next;
}node;
typedef node *list;
void show_list(list);

int main(){
list head,tail;
int ch;
int n;

head = tail = NULL;

printf("Enter data ? (1/0) \n");
scanf("%d",&ch);
printf(" \n Give data: ");
scanf("%d",&n);
head = (node *)malloc(sizeof(node));
head->data = n;
head->next = NULL;
tail = head;

while(ch==1){
printf(" Give data: ");
scanf("%d",&n);
tail->next = (node *) malloc(sizeof(node));
tail->next->data = n;
tail->next->next = NULL;
tail = tail->next;
printf("\n Enter more data (1/0):");
scanf("%d",&ch);

}
show_list(head);
}
void show_list(head)
list head;
{
list temp = head;
while(temp!=NULL)
{
printf("%d ", temp->data);
temp = temp->next;
}
}
