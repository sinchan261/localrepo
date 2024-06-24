#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void print(node *n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
}
void add(node **head_ref,int newdata){
    node *newnode=new node();
    newnode->data=newdata;
    newnode->next=*head_ref;
    *head_ref=newnode;
}
void deletefirst(node **head){
    if(*head==NULL){
    return;}
    node *temp=*head;
*head=(*head)->next;
free(temp);
}
int main(){
node *first=NULL;
add(&first,34);
add(&first,56);
add(&first,105);
add(&first,465);
deletefirst(&first);
print(first);
}