#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
    struct node* prev;
};
struct node *head;
void add_to_empty(int data){
    head = malloc(sizeof(struct node));

    head->data = data;
    head->link = head;
    head->prev = head;
    
};

void add_to_end(int data){
    struct node* newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = data;
    head->prev->link = newnode;
    newnode->prev = head->prev;
    newnode->link = head;
    head->prev = newnode;
};



void print(){
    struct node* temp;
    temp = head;
    do{
        printf("%d -> ", temp->data);
        
        temp = temp->link;
    } while(temp!= head);
    printf("head");
};

int main(){
    add_to_empty(01);
    struct node *node2 = (struct node*)malloc(sizeof(struct node));
    struct node *node3 = (struct node*)malloc(sizeof(struct node));
    node2->data = 03;
    node3->data = 04;
    node2->link = node3;
    node3->link = head;
    node2->prev = head;
    node3->prev = node2;
    head->prev = node3; 
    head->link = node2;

    add_to_end(02);
    print();
    return 0;
}