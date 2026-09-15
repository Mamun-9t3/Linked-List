#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
    struct node* prev;
};

void add_to_list(struct node** head,int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->prev= NULL;
    temp->data = data;
    temp->link= NULL;

    *head = temp;
    
};

void add_at_beg(struct node** head, int data){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data= data;
    temp->link = *head;

    (*head)->prev = temp;
    (*head) = temp;
}

void add_at_end(struct node**head, int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->link = NULL;
    struct node *ptr = NULL;
    ptr= *head;

    while(ptr->link != NULL){
        ptr= ptr->link;
    };
    temp->prev = ptr;
    ptr->link = temp;
};

void insert_between(struct node** head,int data, int pos){
    struct node* temp  =(struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->link = NULL;

    struct node* ptr = NULL;
    struct node* ptr2 = NULL;
    ptr = *head;

    while(pos > data){
        ptr = ptr->link;
        pos--;
    };
    ptr2 = ptr->link;
    temp->prev = ptr;
    temp-> link = ptr2;
    ptr->link = temp;
    ptr2->prev= temp;
};

int main(){
struct node*head = NULL;
add_to_list(&head, 45);
add_at_beg(&head,56);
add_at_end(&head, 65);
int data = 2;
insert_between(&head,67,data);
struct node*ptr = NULL;
ptr= head;
while(ptr != NULL){
    printf("%d\n", ptr->data);
    ptr= ptr->link;
};

return 0;
}