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



void print (struct node* temp){
    do {
        printf("%d", temp->data);
        temp = temp->link;

    }while(temp!= head);
}

void del_end(){
    struct node* temp = head;
    if(temp == NULL){
        printf("LL is empty");
    }
    if(temp->link == head){
        free(head);
        temp= NULL;
    }

    while(temp->link->link != head){
        temp= temp->link;
    }
    free(temp->link);
    temp->link = head;
}

int main(){

    add_to_empty(1);
    struct node*node2 = (struct node*)malloc(sizeof(struct node)); 
    struct node*node3 = (struct node*)malloc(sizeof(struct node)); 
    node2->data = 2;
    node3->data = 3;
    head->link = node2;
    node2->link = node3;
    node3->link = head;

    del_end();

    struct node *temp;
    temp = head;
    print(temp);
}

