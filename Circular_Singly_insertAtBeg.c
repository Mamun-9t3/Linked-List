#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};
struct node* head = NULL;

void createNode(int data){
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = temp;
    head= temp;
};

void add_to_beg(int data){
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = head;
    head->link = temp;
    head = temp;
}


void print(struct node *temp){
    do{
        printf("%d->", temp->data);
        temp = temp->link;
    }while(temp!= head);
};
int main(){
    createNode(1);
    add_to_beg(2);
    struct node *temp;
    temp = head; 
    print(temp);
    return 0;
}