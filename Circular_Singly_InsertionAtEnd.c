#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*link;
};
struct node * head;
void add_to_empty(int data){
    head = malloc(sizeof(struct node));
    head->data = data;
    head->link = head;
};

void add_to_beg(int data){
    struct node *temp;
    struct node *ptr;
    ptr = head;

    while(ptr->link!= head){
        ptr= ptr->link;
    }
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = head;
    ptr->link = temp;
    head = temp;
};
void add_at_end(int data){
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    
    struct node * ptr;
    ptr = head;
    do{
        ptr = ptr->link;
    }while(ptr->link!= head);

    ptr->link = temp;
    temp->link = head;

};

void print (struct node* temp){
    do {
        printf("%d", temp->data);
        temp = temp->link;

    }while(temp!= head);
}

int main(){

    add_to_empty(1);
    add_to_beg(2);
    add_at_end(3);
    struct node *temp;
    temp = head;
    print(temp);
}

