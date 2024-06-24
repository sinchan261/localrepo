#include<stdio.h>
# include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void push(struct node **head_ref,int data){
  
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=data;
  
   
   if(*head_ref==NULL){
     newnode->next=newnode;
    *head_ref=newnode;
   }
   else{
     struct node *temp= (*head_ref)->next;
     while(temp->next!=*head_ref){
    temp=temp->next;
   }
   temp->next=newnode;
    newnode->next=*head_ref;
    
   }
}
void print(struct node *prin) {
    struct node *temp = prin;
    do {
        printf("%d\n", temp->data);
        temp = temp->next;
    } while (temp != prin);
}
int main(){
   struct node *head=NULL;
   push(&head,45);
    push(&head,45);
     push(&head,45);
     print(head);
}