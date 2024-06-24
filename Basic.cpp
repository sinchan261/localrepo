#include<iostream>
using namespace std;
struct node{
    int data;
    node *head;
};
void printlist(node*n){
    while(n->head!=NULL){
        cout<<n->data<<endl;
        n=n->head;
    }
}
int main(){
node *ptr=new node();
node *first=new node();
node *second=new node();
node *third=new node();
ptr->data=5;
ptr->head=first;
first->data=6;
first->head=second;
second->data=10;
second->head=third;
third->data=56;
third->head=NULL;

printlist(ptr);
}