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

void del_last(struct node** head){
    struct node *temp = NULL;
    struct node *temp2 = NULL;
    temp = *head;

    while(temp->link != NULL){
        temp = temp->link;
    }
    temp2 = temp->prev;
    temp2->link = NULL;
    free(temp);
};

int main(){
struct node*head = NULL;
add_to_list(&head, 45);
add_at_beg(&head,56);
add_at_end(&head, 65);
// del_last(&head);
struct node*ptr = NULL;
ptr= head;
while(ptr != NULL){
    printf("%d\n", ptr->data);
    ptr= ptr->link;
};

return 0;
}