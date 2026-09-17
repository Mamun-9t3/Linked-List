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
    // add_to_beg(02);
    print();
    return 0;
}